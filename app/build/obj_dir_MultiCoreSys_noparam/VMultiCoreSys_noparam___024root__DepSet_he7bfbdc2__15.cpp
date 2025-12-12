// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiCoreSys_noparam.h for the primary calling header

#include "VMultiCoreSys_noparam__pch.h"
#include "VMultiCoreSys_noparam__Syms.h"
#include "VMultiCoreSys_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0;

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2828__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2828__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2828__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2828__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2829__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2829__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2829__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2829__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2828__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2828__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2828__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2828__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2828__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2828__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2828__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2828__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2828__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2828__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2829__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2829__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2829__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2829__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2829__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2829__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2829__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2829__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2829__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2829__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2830__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2830__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2830__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2830__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2831__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2831__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2831__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2831__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2830__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2830__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2830__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2830__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2830__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2830__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2830__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2830__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2830__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2830__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2831__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2831__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2831__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2831__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2831__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2831__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2831__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2831__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2831__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2831__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2832__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2832__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2832__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2832__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2833__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2833__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2833__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2833__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2832__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2832__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2832__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2832__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2832__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2832__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2832__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2832__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2832__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2832__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2833__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2833__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2833__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2833__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2833__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2833__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2833__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2833__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2833__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2833__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0;

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2834__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2834__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2834__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2834__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2835__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2835__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2835__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2835__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2836__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2836__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2836__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2836__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2837__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2837__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2837__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2837__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2834__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2834__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2834__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2834__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2834__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2834__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2834__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2834__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2834__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2834__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2835__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2835__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2835__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2835__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2835__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2835__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2835__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2835__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2835__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2835__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2836__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2836__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2836__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2836__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2836__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2836__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2836__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2836__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2836__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2836__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2837__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2837__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2837__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2837__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2837__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2837__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2837__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2837__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2837__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2837__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2838__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2838__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2838__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2838__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2839__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2839__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2839__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2839__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2840__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2840__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2840__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2840__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2841__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2841__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2841__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2841__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2838__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2838__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2838__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2838__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2838__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2838__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2838__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2838__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2838__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2838__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2839__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2839__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2839__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2839__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2839__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2839__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2839__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2839__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2839__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2839__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2840__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2840__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2840__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2840__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2840__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2840__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2840__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2840__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2840__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2840__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2841__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2841__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2841__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2841__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2841__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2841__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2841__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2841__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2841__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2841__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2842__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2842__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2842__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2842__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2843__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2843__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2843__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2843__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2844__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2844__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2844__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2844__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2845__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2845__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2845__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2845__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2842__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2842__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2842__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2842__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2842__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2842__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2842__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2842__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2842__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2842__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2843__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2843__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2843__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2843__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2843__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2843__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2843__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2843__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2843__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2843__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2844__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2844__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2844__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2844__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2844__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2844__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2844__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2844__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2844__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2844__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2845__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2845__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2845__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2845__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2845__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2845__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2845__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2845__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2845__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2845__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0;

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2847__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2847__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2847__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2847__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2848__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2848__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2848__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2848__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2848__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2848__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2849__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2849__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2849__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2849__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2850__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2850__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2850__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2850__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2850__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2850__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2851__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2851__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2851__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2851__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2852__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2852__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2852__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2852__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2852__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2852__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2853__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2853__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2853__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2853__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2854__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2854__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2854__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2854__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2854__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2854__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg 
                                                 >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg 
                                   >> 0x38U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg 
                                                             >> 0x30U))));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
        [0U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2847__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2847__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2847__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2847__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2847__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2847__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2847__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2847__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2847__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2847__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2848__num 
            = MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2848__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2848__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2848__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2848__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2848__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2848__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2848__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2848__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2849__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2849__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2849__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2849__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2849__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2849__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2849__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2849__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2849__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2849__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2850__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2850__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2850__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2850__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2850__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2850__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2850__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2850__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2850__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2851__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2851__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2851__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2851__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2851__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2851__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2851__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2851__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2851__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2851__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2852__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2852__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2852__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2852__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2852__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2852__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2852__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2852__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2852__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2853__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2853__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2853__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2853__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2853__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2853__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2853__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2853__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2853__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2853__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2854__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2854__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2854__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2854__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2854__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2854__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2854__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2854__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2854__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2846__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2856__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2856__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2856__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2856__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2857__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2857__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2857__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2857__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2857__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2857__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2858__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2858__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2858__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2858__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2859__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2859__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2859__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2859__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2859__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2859__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2860__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2860__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2860__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2860__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2861__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2861__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2861__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2861__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2861__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2861__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2862__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2862__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2862__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2862__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2863__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2863__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2863__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2863__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2863__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2863__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg 
                                                 >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg 
                                   >> 0x38U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg 
                                                             >> 0x30U))));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
        [1U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2856__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2856__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2856__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2856__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2856__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2856__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2856__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2856__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2856__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2856__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2857__num 
            = MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2857__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2857__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2857__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2857__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2857__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2857__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2857__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2857__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2858__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2858__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2858__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2858__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2858__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2858__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2858__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2858__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2858__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2858__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2859__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2859__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2859__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2859__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2859__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2859__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2859__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2859__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2859__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2860__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2860__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2860__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2860__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2860__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2860__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2860__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2860__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2860__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2860__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2861__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2861__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2861__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2861__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2861__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2861__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2861__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2861__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2861__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2862__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2862__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2862__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2862__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2862__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2862__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2862__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2862__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2862__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2862__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2863__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2863__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2863__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2863__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2863__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2863__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2863__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2863__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2863__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2855__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2865__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2865__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2865__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2865__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2866__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2866__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2866__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2866__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2866__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2866__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2867__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2867__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2867__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2867__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2868__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2868__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2868__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2868__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2868__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2868__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2869__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2869__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2869__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2869__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2870__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2870__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2870__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2870__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2870__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2870__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2871__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2871__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2871__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2871__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2872__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2872__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2872__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2872__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2872__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2872__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg 
                                                 >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg 
                                   >> 0x38U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg 
                                                             >> 0x30U))));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
        [2U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2865__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2865__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2865__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2865__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2865__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2865__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2865__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2865__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2865__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2865__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2866__num 
            = MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2866__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2866__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2866__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2866__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2866__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2866__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2866__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2866__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2867__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2867__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2867__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2867__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2867__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2867__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2867__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2867__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2867__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2867__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2868__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2868__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2868__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2868__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2868__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2868__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2868__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2868__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2868__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2869__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2869__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2869__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2869__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2869__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2869__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2869__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2869__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2869__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2869__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2870__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2870__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2870__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2870__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2870__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2870__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2870__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2870__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2870__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2871__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2871__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2871__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2871__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2871__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2871__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2871__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2871__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2871__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2871__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2872__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2872__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2872__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2872__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2872__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2872__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2872__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2872__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2872__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2864__trace);
}

extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h803d56e6_0;

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2873__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2873__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2873__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2873__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2874__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2874__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2874__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2874__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2875__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2875__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2875__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2875__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2876__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2876__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2876__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2876__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2877__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2877__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2877__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2877__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2878__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2878__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2878__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2878__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2879__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2879__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2879__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2879__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2880__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2880__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2880__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2880__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2881__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2881__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2881__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2881__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2882__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2882__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2882__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2882__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2883__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2883__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2883__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2883__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2884__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2884__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2884__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2884__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2885__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2885__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2885__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2885__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2886__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2886__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2886__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2886__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2887__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2887__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2887__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2887__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2888__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2888__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2888__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2888__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2889__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2889__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2890__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2890__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2890__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2890__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2891__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2891__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2891__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2891__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2892__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2892__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2892__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2892__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2893__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2893__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2893__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2893__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2894__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2894__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2895__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2895__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2895__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2895__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2896__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2896__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2896__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2896__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2897__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2897__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2897__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2897__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2898__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2898__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2898__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2898__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2899__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2899__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2900__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2900__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2900__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2900__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2901__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2901__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2901__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2901__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2902__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2902__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2902__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2902__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2903__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2903__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2903__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2903__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2873__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2873__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2873__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2873__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2873__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2873__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2873__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2873__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2873__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2873__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2874__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2874__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2874__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2874__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2874__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2874__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2874__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2874__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2874__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2874__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2875__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2875__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2875__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2875__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2875__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2875__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2875__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2875__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2875__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2875__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2876__str, VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2876__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2876__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2876__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2876__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2876__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2876__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2876__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2876__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2876__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2877__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2877__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2877__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2877__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2877__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2877__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2877__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2877__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2877__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2877__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2878__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2878__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2878__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2878__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2878__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2878__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2878__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2878__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2878__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2878__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2879__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2879__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2879__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2879__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2879__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2879__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2879__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2879__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2879__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2879__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2880__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2880__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2880__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2880__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2880__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2880__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2880__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2880__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2880__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2880__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2881__str, VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2881__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2881__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2881__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2881__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2881__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2881__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2881__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2881__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2881__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2882__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2882__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2882__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2882__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2882__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2882__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2882__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2882__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2882__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2882__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2883__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2883__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2883__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2883__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2883__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2883__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2883__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2883__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2883__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2883__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2884__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2884__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2884__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2884__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2884__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2884__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2884__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2884__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2884__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2884__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2885__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2885__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2885__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2885__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2885__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2885__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2885__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2885__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2885__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2885__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2886__str, VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2886__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2886__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2886__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2886__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2886__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2886__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2886__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2886__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2886__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2887__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2887__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2887__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2887__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2887__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2887__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2887__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2887__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2887__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2887__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2888__str, VMultiCoreSys_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2888__trace, trace_str);
    vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2888__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2888__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
        = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2888__trace[0U];
    vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2888__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2888__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2888__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2888__trace[0U] 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2888__trace);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2889__trace_str, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2890__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2890__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2889__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2890__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2890__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2890__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2890__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2890__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2890__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2890__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2889__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2890__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2891__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2891__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2889__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2891__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2891__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2891__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2891__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2891__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2891__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2891__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2889__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2891__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2892__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2892__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2889__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2892__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2892__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2892__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2892__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2892__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2892__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2892__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2889__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2892__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2893__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2893__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2889__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2893__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2893__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2893__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2893__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2893__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2893__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2893__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2889__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2893__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2889__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2894__trace_str, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2895__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2895__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2894__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2895__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2895__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2895__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2895__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2895__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2895__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2895__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2894__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2895__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2896__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2896__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2894__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2896__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2896__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2896__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2896__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2896__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2896__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2896__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2894__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2896__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2897__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2897__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2894__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2897__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2897__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2897__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2897__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2897__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2897__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2897__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2894__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2897__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2898__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2898__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2894__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2898__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2898__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2898__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2898__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2898__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2898__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2898__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2894__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2898__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2894__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2899__trace_str, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2900__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2900__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2899__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2900__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2900__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2900__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2900__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2900__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2900__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2900__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2899__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2900__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2901__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2901__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2899__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2901__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2901__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2901__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2901__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2901__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2901__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2901__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2899__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2901__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2902__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2902__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2899__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2902__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2902__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2902__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2902__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2902__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2902__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2902__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2899__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2902__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2903__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2903__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2899__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2903__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2903__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2903__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2903__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2903__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2903__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2903__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2899__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2903__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2899__trace_str);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2904__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2904__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2904__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2904__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2905__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2905__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2905__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2905__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2904__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2904__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2904__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2904__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2904__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2904__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2904__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2904__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2904__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2904__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2905__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2905__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2905__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2905__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2905__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2905__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2905__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2905__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2905__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2905__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2906__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2906__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2906__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2906__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2907__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2907__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2907__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2907__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2906__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2906__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2906__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2906__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2906__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2906__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2906__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2906__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2906__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2906__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2907__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2907__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2907__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2907__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2907__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2907__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2907__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2907__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2907__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2907__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2908__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2908__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2908__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2908__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2909__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2909__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2909__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2909__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2908__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2908__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2908__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2908__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2908__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2908__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2908__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2908__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2908__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2908__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2909__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2909__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2909__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2909__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2909__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2909__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2909__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2909__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2909__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2909__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2910__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2910__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2910__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2910__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2911__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2911__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2911__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2911__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2912__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2912__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2912__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2912__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2913__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2913__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2913__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2913__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2910__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2910__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2910__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2910__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2910__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2910__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2910__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2910__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2910__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2910__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2911__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2911__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2911__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2911__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2911__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2911__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2911__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2911__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2911__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2911__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2912__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2912__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2912__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2912__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2912__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2912__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2912__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2912__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2912__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2912__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2913__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2913__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2913__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2913__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2913__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2913__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2913__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2913__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2913__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2913__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2914__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2914__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2914__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2914__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2915__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2915__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2915__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2915__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2916__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2916__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2916__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2916__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2917__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2917__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2917__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2917__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2914__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2914__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2914__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2914__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2914__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2914__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2914__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2914__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2914__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2914__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2915__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2915__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2915__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2915__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2915__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2915__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2915__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2915__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2915__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2915__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2916__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2916__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2916__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2916__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2916__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2916__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2916__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2916__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2916__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2916__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2917__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2917__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2917__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2917__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2917__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2917__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2917__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2917__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2917__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2917__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2918__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2918__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2918__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2918__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2919__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2919__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2919__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2919__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2920__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2920__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2920__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2920__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2921__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2921__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2921__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2921__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2918__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2918__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2918__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2918__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2918__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2918__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2918__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2918__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2918__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2918__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2919__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2919__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2919__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2919__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2919__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2919__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2919__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2919__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2919__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2919__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2920__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2920__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2920__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2920__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2920__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2920__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2920__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2920__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2920__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2920__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2921__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2921__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2921__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2921__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2921__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2921__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2921__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2921__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2921__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2921__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2923__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2923__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2923__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2923__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2924__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2924__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2924__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2924__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2924__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2924__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2925__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2925__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2925__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2925__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2926__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2926__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2926__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2926__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2926__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2926__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2927__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2927__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2927__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2927__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2928__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2928__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2928__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2928__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2928__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2928__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2929__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2929__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2929__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2929__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2930__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2930__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2930__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2930__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2930__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2930__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg 
                                                 >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg 
                                   >> 0x38U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg 
                                                             >> 0x30U))));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
        [0U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2923__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2923__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2923__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2923__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2923__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2923__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2923__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2923__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2923__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2923__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2924__num 
            = MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2924__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2924__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2924__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2924__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2924__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2924__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2924__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2924__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2925__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2925__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2925__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2925__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2925__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2925__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2925__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2925__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2925__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2925__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2926__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2926__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2926__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2926__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2926__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2926__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2926__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2926__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2926__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2927__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2927__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2927__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2927__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2927__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2927__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2927__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2927__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2927__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2927__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2928__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2928__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2928__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2928__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2928__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2928__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2928__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2928__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2928__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2929__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2929__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2929__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2929__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2929__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2929__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2929__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2929__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2929__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2929__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2930__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2930__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2930__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2930__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2930__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2930__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2930__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2930__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2930__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2922__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2932__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2932__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2932__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2932__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2933__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2933__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2933__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2933__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2933__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2933__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2934__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2934__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2934__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2934__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2935__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2935__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2935__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2935__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2935__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2935__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2936__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2936__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2936__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2936__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2937__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2937__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2937__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2937__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2937__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2937__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2938__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2938__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2938__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2938__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2939__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2939__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2939__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2939__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2939__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2939__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg 
                                                 >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg 
                                   >> 0x38U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg 
                                                             >> 0x30U))));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
        [1U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2932__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2932__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2932__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2932__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2932__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2932__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2932__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2932__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2932__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2932__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2933__num 
            = MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2933__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2933__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2933__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2933__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2933__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2933__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2933__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2933__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2934__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2934__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2934__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2934__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2934__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2934__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2934__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2934__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2934__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2934__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2935__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2935__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2935__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2935__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2935__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2935__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2935__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2935__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2935__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2936__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2936__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2936__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2936__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2936__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2936__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2936__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2936__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2936__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2936__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2937__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2937__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2937__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2937__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2937__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2937__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2937__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2937__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2937__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2938__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2938__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2938__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2938__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2938__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2938__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2938__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2938__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2938__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2938__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2939__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2939__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2939__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2939__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2939__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2939__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2939__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2939__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2939__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2931__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2941__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2941__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2941__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2941__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2942__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2942__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2942__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2942__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2942__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2942__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2943__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2943__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2943__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2943__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2944__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2944__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2944__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2944__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2944__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2944__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2945__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2945__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2945__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2945__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2946__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2946__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2946__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2946__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2946__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2946__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2947__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2947__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2947__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2947__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2948__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2948__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2948__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2948__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2948__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2948__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg 
                                                 >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg 
                                   >> 0x38U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg 
                                                             >> 0x30U))));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
        [2U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2941__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2941__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2941__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2941__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2941__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2941__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2941__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2941__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2941__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2941__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2942__num 
            = MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2942__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2942__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2942__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2942__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2942__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2942__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2942__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2942__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2943__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2943__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2943__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2943__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2943__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2943__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2943__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2943__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2943__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2943__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2944__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2944__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2944__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2944__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2944__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2944__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2944__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2944__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2944__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2945__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2945__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2945__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2945__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2945__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2945__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2945__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2945__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2945__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2945__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2946__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2946__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2946__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2946__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2946__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2946__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2946__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2946__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2946__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2947__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2947__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2947__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2947__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2947__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2947__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2947__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2947__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2947__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2947__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2948__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2948__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2948__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2948__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2948__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2948__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2948__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2948__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2948__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2940__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2950__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2950__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2950__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2950__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2951__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2951__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2951__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2951__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2951__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2951__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2952__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2952__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2952__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2952__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2953__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2953__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2953__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2953__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2953__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2953__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2954__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2954__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2954__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2954__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2955__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2955__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2955__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2955__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2955__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2955__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2956__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2956__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2956__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2956__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2957__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2957__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2957__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2957__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2957__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2957__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (IData)((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_msg
                                              [0U] 
                                              >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_msg
                                   [0U] >> 0x38U))));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_rdy
        [0U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_val
        [0U];
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2950__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2950__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2950__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2950__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2950__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2950__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2950__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2950__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2950__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2950__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2951__num 
            = MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2951__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2951__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2951__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2951__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2951__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2951__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2951__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2951__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2952__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2952__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2952__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2952__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2952__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2952__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2952__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2952__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2952__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2952__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2953__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2953__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2953__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2953__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2953__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2953__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2953__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2953__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2953__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2954__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2954__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2954__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2954__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2954__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2954__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2954__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2954__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2954__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2954__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2955__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2955__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2955__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2955__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2955__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2955__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2955__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2955__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2955__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2956__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2956__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2956__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2956__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2956__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2956__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2956__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2956__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2956__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2956__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2957__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2957__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2957__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2957__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2957__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2957__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2957__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2957__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2957__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2949__trace);
}
