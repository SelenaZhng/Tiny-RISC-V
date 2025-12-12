// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiCoreSys_noparam.h for the primary calling header

#include "VMultiCoreSys_noparam__pch.h"
#include "VMultiCoreSys_noparam__Syms.h"
#include "VMultiCoreSys_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0;

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3933__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3933__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3933__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3933__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3934__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3934__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3934__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3934__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3933__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3933__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3933__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3933__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3933__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3933__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3933__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3933__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3933__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3933__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3934__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3934__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3934__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3934__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3934__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3934__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3934__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3934__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3934__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__3934__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3935__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3935__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3935__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3935__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3936__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3936__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3936__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3936__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3935__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3935__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3935__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3935__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3935__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3935__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3935__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3935__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3935__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3935__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3936__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3936__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3936__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3936__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3936__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3936__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3936__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3936__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3936__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__3936__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3937__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3937__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3937__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3937__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3938__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3938__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3938__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3938__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3937__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3937__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3937__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3937__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3937__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3937__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3937__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3937__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3937__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3937__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3938__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3938__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3938__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3938__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3938__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3938__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3938__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3938__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3938__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__3938__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0;

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3939__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3939__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3939__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3939__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3940__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3940__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3940__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3940__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3941__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3941__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3941__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3941__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3942__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3942__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3942__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3942__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3939__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3939__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3939__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3939__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3939__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3939__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3939__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3939__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3939__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3939__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3940__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3940__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3940__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3940__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3940__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3940__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3940__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3940__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3940__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3940__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3941__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3941__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3941__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3941__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3941__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3941__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3941__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3941__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3941__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3941__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3942__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3942__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3942__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3942__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3942__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3942__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3942__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3942__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3942__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__3942__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3943__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3943__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3943__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3943__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3944__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3944__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3944__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3944__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3945__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3945__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3945__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3945__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3946__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3946__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3946__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3946__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3943__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3943__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3943__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3943__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3943__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3943__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3943__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3943__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3943__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3943__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3944__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3944__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3944__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3944__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3944__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3944__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3944__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3944__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3944__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3944__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3945__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3945__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3945__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3945__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3945__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3945__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3945__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3945__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3945__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3945__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3946__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3946__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3946__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3946__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3946__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3946__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3946__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3946__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3946__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__3946__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3947__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3947__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3947__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3947__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3948__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3948__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3948__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3948__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3949__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3949__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3949__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3949__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3950__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3950__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3950__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3950__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3947__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3947__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3947__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3947__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3947__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3947__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3947__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3947__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3947__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3947__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3948__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3948__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3948__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3948__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3948__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3948__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3948__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3948__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3948__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3948__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3949__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3949__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3949__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3949__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3949__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3949__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3949__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3949__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3949__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3949__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3950__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3950__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3950__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3950__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3950__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3950__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3950__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3950__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3950__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__3950__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0;

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3952__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3952__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3952__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3952__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3953__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3953__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3953__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3953__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3953__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3953__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3954__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3954__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3954__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3954__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3955__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3955__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3955__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3955__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3955__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3955__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3956__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3956__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3956__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3956__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3957__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3957__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3957__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3957__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3957__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3957__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3958__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3958__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3958__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3958__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3959__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3959__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3959__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3959__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3959__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3959__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
        [0U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3952__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3952__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3952__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3952__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3952__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3952__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3952__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3952__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3952__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3952__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3953__num 
            = MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3953__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3953__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3953__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3953__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3953__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3953__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3953__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3953__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3954__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3954__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3954__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3954__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3954__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3954__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3954__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3954__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3954__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3954__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3955__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3955__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3955__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3955__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3955__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3955__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3955__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3955__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3955__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3956__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3956__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3956__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3956__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3956__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3956__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3956__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3956__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3956__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3956__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3957__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3957__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3957__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3957__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3957__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3957__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3957__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3957__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3957__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3958__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3958__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3958__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3958__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3958__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3958__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3958__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3958__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3958__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__3958__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3959__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3959__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3959__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3959__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3959__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3959__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3959__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3959__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__3959__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__3951__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3961__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3961__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3961__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3961__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3962__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3962__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3962__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3962__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3962__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3962__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3963__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3963__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3963__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3963__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3964__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3964__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3964__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3964__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3964__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3964__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3965__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3965__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3965__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3965__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3966__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3966__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3966__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3966__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3966__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3966__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3967__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3967__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3967__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3967__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3968__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3968__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3968__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3968__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3968__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3968__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
        [1U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3961__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3961__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3961__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3961__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3961__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3961__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3961__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3961__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3961__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3961__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3962__num 
            = MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3962__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3962__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3962__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3962__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3962__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3962__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3962__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3962__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3963__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3963__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3963__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3963__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3963__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3963__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3963__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3963__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3963__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3963__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3964__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3964__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3964__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3964__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3964__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3964__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3964__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3964__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3964__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3965__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3965__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3965__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3965__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3965__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3965__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3965__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3965__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3965__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3965__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3966__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3966__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3966__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3966__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3966__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3966__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3966__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3966__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3966__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3967__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3967__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3967__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3967__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3967__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3967__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3967__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3967__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3967__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__3967__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3968__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3968__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3968__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3968__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3968__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3968__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3968__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3968__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__3968__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__3960__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3970__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3970__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3970__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3970__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3971__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3971__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3971__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3971__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3971__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3971__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3972__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3972__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3972__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3972__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3973__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3973__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3973__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3973__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3973__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3973__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3974__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3974__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3974__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3974__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3975__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3975__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3975__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3975__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3975__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3975__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3976__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3976__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3976__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3976__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3977__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3977__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3977__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3977__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3977__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3977__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
        [2U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3970__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3970__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3970__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3970__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3970__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3970__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3970__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3970__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3970__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3970__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3971__num 
            = MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3971__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3971__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3971__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3971__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3971__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3971__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3971__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3971__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3972__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3972__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3972__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3972__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3972__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3972__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3972__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3972__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3972__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3972__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3973__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3973__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3973__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3973__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3973__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3973__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3973__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3973__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3973__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3974__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3974__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3974__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3974__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3974__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3974__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3974__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3974__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3974__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3974__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3975__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3975__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3975__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3975__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3975__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3975__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3975__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3975__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3975__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3976__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3976__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3976__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3976__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3976__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3976__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3976__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3976__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3976__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__3976__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3977__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3977__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3977__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3977__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3977__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3977__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3977__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3977__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__3977__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__3969__trace);
}

extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h803d56e6_0;

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3978__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3978__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3978__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3978__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3979__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3979__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3979__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3979__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3980__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3980__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3980__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3980__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3981__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3981__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3981__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3981__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3982__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3982__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3982__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3982__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3983__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3983__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3983__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3983__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3984__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3984__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3984__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3984__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3985__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3985__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3985__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3985__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3986__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3986__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3986__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3986__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3987__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3987__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3987__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3987__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3988__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3988__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3988__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3988__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3989__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3989__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3989__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3989__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3990__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3990__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3990__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3990__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3991__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3991__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3991__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3991__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3992__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3992__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3992__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3992__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3993__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3993__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3993__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3993__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__3994__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__3994__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3995__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3995__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3995__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3995__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3996__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3996__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3996__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3996__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3997__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3997__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3997__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3997__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3998__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3998__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3998__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3998__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__3999__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__3999__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4000__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4000__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4000__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4000__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4001__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4001__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4001__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4001__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4002__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4002__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4002__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4002__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4003__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4003__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4003__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4003__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__4004__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__4004__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4005__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4005__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4005__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4005__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4006__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4006__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4006__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4006__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4007__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4007__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4007__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4007__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4008__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4008__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4008__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4008__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3978__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3978__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3978__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3978__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3978__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3978__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3978__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3978__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3978__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3978__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3979__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3979__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3979__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3979__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3979__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3979__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3979__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3979__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3979__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3979__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3980__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3980__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3980__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3980__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3980__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3980__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3980__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3980__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3980__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3980__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3981__str, VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3981__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3981__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3981__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3981__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3981__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3981__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3981__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3981__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3981__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3982__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3982__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3982__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3982__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3982__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3982__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3982__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3982__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3982__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3982__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3983__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3983__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3983__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3983__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3983__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3983__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3983__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3983__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3983__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3983__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3984__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3984__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3984__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3984__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3984__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3984__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3984__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3984__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3984__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3984__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3985__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3985__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3985__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3985__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3985__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3985__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3985__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3985__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3985__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3985__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3986__str, VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3986__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3986__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3986__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3986__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3986__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3986__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3986__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3986__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3986__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3987__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3987__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3987__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3987__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3987__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3987__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3987__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3987__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3987__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3987__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3988__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3988__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3988__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3988__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3988__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3988__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3988__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3988__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3988__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3988__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3989__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3989__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3989__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3989__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3989__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3989__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3989__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3989__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3989__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3989__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3990__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3990__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3990__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3990__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3990__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3990__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3990__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3990__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3990__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3990__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3991__str, VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3991__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3991__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3991__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3991__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3991__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3991__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3991__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3991__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3991__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3992__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3992__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3992__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3992__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3992__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3992__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3992__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3992__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3992__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3992__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3993__str, VMultiCoreSys_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3993__trace, trace_str);
    vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3993__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3993__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
        = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3993__trace[0U];
    vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3993__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3993__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3993__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3993__trace[0U] 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__3993__trace);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__3994__trace_str, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3995__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3995__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__3994__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3995__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3995__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3995__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3995__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3995__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3995__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3995__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__3994__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3995__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3996__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3996__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__3994__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3996__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3996__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3996__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3996__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3996__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3996__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3996__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__3994__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3996__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3997__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3997__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__3994__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3997__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3997__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3997__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3997__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3997__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3997__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3997__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__3994__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3997__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3998__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3998__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__3994__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3998__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3998__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3998__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3998__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3998__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3998__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3998__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__3994__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__3998__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__3994__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__3999__trace_str, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4000__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4000__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__3999__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4000__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4000__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4000__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4000__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4000__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4000__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4000__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__3999__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4000__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4001__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4001__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__3999__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4001__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4001__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4001__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4001__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4001__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4001__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4001__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__3999__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4001__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4002__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4002__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__3999__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4002__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4002__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4002__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4002__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4002__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4002__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4002__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__3999__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4002__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4003__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4003__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__3999__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4003__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4003__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4003__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4003__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4003__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4003__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4003__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__3999__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4003__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__3999__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__4004__trace_str, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4005__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4005__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__4004__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4005__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4005__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4005__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4005__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4005__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4005__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4005__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__4004__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4005__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4006__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4006__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__4004__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4006__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4006__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4006__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4006__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4006__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4006__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4006__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__4004__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4006__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4007__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4007__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__4004__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4007__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4007__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4007__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4007__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4007__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4007__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4007__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__4004__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4007__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4008__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4008__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__4004__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4008__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4008__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4008__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4008__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4008__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4008__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4008__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__4004__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4008__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__4004__trace_str);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4009__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4009__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4009__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4009__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4010__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4010__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4010__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4010__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4009__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4009__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4009__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4009__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4009__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4009__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4009__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4009__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4009__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4009__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4010__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4010__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4010__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4010__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4010__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4010__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4010__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4010__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4010__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__4010__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4011__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4011__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4011__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4011__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4012__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4012__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4012__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4012__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4011__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4011__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4011__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4011__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4011__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4011__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4011__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4011__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4011__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4011__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4012__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4012__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4012__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4012__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4012__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4012__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4012__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4012__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4012__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__4012__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4013__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4013__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4013__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4013__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4014__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4014__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4014__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4014__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4013__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4013__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4013__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4013__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4013__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4013__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4013__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4013__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4013__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4013__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4014__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4014__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4014__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4014__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4014__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4014__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4014__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4014__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4014__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__4014__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4015__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4015__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4015__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4015__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4016__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4016__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4016__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4016__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4017__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4017__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4017__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4017__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4018__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4018__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4018__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4018__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4015__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4015__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4015__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4015__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4015__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4015__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4015__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4015__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4015__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4015__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4016__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4016__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4016__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4016__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4016__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4016__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4016__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4016__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4016__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4016__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4017__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4017__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4017__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4017__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4017__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4017__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4017__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4017__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4017__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4017__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4018__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4018__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4018__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4018__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4018__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4018__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4018__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4018__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4018__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__4018__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4019__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4019__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4019__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4019__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4020__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4020__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4020__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4020__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4021__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4021__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4021__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4021__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4022__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4022__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4022__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4022__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4019__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4019__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4019__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4019__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4019__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4019__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4019__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4019__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4019__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4019__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4020__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4020__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4020__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4020__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4020__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4020__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4020__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4020__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4020__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4020__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4021__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4021__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4021__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4021__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4021__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4021__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4021__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4021__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4021__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4021__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4022__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4022__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4022__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4022__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4022__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4022__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4022__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4022__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4022__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__4022__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4023__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4023__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4023__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4023__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4024__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4024__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4024__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4024__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4025__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4025__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4025__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4025__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4026__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4026__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4026__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4026__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4023__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4023__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4023__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4023__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4023__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4023__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4023__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4023__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4023__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4023__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4024__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4024__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4024__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4024__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4024__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4024__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4024__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4024__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4024__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4024__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4025__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4025__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4025__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4025__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4025__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4025__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4025__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4025__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4025__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4025__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4026__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4026__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4026__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4026__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4026__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4026__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4026__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4026__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4026__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__4026__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4028__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4028__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4028__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4028__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4029__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4029__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4029__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4029__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4029__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4029__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4030__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4030__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4030__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4030__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4031__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4031__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4031__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4031__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4031__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4031__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4032__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4032__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4032__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4032__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4033__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4033__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4033__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4033__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4033__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4033__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4034__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4034__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4034__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4034__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4035__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4035__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4035__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4035__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4035__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4035__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
        [0U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4028__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4028__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4028__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4028__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4028__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4028__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4028__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4028__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4028__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4028__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4029__num 
            = MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4029__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4029__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4029__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4029__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4029__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4029__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4029__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4029__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4030__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4030__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4030__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4030__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4030__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4030__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4030__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4030__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4030__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4030__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4031__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4031__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4031__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4031__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4031__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4031__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4031__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4031__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4031__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4032__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4032__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4032__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4032__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4032__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4032__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4032__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4032__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4032__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4032__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4033__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4033__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4033__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4033__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4033__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4033__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4033__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4033__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4033__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4034__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4034__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4034__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4034__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4034__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4034__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4034__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4034__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4034__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__4034__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4035__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4035__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4035__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4035__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4035__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4035__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4035__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4035__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__4035__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__4027__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4037__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4037__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4037__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4037__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4038__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4038__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4038__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4038__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4038__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4038__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4039__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4039__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4039__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4039__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4040__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4040__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4040__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4040__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4040__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4040__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4041__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4041__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4041__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4041__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4042__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4042__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4042__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4042__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4042__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4042__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4043__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4043__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4043__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4043__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4044__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4044__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4044__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4044__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4044__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4044__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
        [1U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4037__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4037__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4037__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4037__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4037__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4037__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4037__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4037__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4037__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4037__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4038__num 
            = MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4038__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4038__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4038__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4038__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4038__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4038__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4038__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4038__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4039__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4039__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4039__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4039__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4039__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4039__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4039__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4039__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4039__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4039__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4040__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4040__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4040__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4040__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4040__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4040__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4040__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4040__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4040__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4041__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4041__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4041__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4041__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4041__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4041__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4041__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4041__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4041__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4041__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4042__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4042__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4042__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4042__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4042__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4042__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4042__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4042__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4042__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4043__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4043__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4043__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4043__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4043__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4043__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4043__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4043__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4043__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__4043__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4044__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4044__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4044__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4044__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4044__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4044__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4044__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4044__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__4044__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__4036__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4046__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4046__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4046__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4046__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4047__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4047__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4047__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4047__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4047__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4047__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4048__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4048__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4048__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4048__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4049__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4049__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4049__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4049__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4049__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4049__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4050__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4050__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4050__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4050__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4051__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4051__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4051__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4051__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4051__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4051__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4052__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4052__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4052__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4052__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4053__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4053__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4053__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4053__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4053__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4053__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
        [2U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4046__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4046__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4046__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4046__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4046__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4046__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4046__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4046__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4046__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4046__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4047__num 
            = MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4047__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4047__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4047__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4047__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4047__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4047__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4047__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4047__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4048__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4048__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4048__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4048__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4048__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4048__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4048__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4048__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4048__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4048__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4049__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4049__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4049__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4049__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4049__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4049__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4049__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4049__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4049__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4050__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4050__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4050__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4050__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4050__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4050__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4050__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4050__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4050__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4050__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4051__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4051__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4051__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4051__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4051__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4051__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4051__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4051__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4051__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4052__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4052__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4052__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4052__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4052__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4052__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4052__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4052__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4052__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__4052__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4053__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4053__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4053__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4053__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4053__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4053__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4053__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4053__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__4053__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__4045__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4055__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4055__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4055__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4055__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4056__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4056__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4056__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4056__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4056__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4056__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4057__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4057__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4057__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4057__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4058__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4058__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4058__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4058__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4058__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4058__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4059__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4059__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4059__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4059__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4060__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4060__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4060__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4060__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4060__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4060__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4061__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4061__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4061__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4061__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4062__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4062__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4062__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4062__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4062__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4062__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
                                      [0U][4U] >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
                           [0U][4U] >> 0x1aU)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__channels_cw_rdy
        [0U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__channels_cw_val
        [0U];
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4055__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4055__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4055__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4055__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4055__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4055__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4055__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4055__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4055__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4055__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4056__num 
            = MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4056__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4056__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4056__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4056__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4056__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4056__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4056__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4056__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4057__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4057__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4057__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4057__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4057__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4057__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4057__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4057__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4057__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4057__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4058__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4058__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4058__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4058__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4058__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4058__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4058__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4058__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4058__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4059__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4059__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4059__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4059__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4059__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4059__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4059__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4059__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4059__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4059__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4060__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4060__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4060__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4060__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4060__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4060__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4060__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4060__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4060__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4061__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4061__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4061__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4061__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4061__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4061__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4061__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4061__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4061__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__4061__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4062__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4062__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4062__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4062__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4062__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4062__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4062__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4062__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__4062__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__4054__trace);
}
