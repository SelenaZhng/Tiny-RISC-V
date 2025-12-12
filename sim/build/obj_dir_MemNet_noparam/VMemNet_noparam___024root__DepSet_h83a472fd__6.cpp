// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemNet_noparam.h for the primary calling header

#include "VMemNet_noparam__pch.h"
#include "VMemNet_noparam__Syms.h"
#include "VMemNet_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VMemNet_noparam__ConstPool__CONST_h77bdfd62_0;

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__912__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__912__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__912__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__912__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__913__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__913__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__913__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__913__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__912__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__912__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__912__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__912__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__912__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__912__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__912__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__912__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__912__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__912__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__913__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__913__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__913__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__913__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__913__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__913__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__913__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__913__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__913__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__913__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__914__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__914__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__914__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__914__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__915__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__915__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__915__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__915__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__914__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__914__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__914__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__914__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__914__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__914__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__914__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__914__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__914__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__914__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__915__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__915__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__915__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__915__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__915__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__915__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__915__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__915__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__915__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__915__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__916__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__916__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__916__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__916__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__917__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__917__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__917__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__917__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__916__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__916__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__916__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__916__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__916__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__916__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__916__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__916__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__916__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__916__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__917__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__917__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__917__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__917__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__917__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__917__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__917__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__917__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__917__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__917__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VMemNet_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VMemNet_noparam__ConstPool__CONST_h363e659f_0;
extern const VlWide<128>/*4095:0*/ VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0;

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__918__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__918__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__918__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__918__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__918__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__918__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__918__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__918__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__918__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__918__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__918__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__918__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__918__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__918__trace);
    } else if ((1U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__919__trace);
    } else if ((2U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__920__trace);
    } else if ((3U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__921__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__922__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__922__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__922__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__922__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__923__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__923__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__923__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__923__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__922__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__922__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__922__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__922__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__922__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__922__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__922__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__922__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__922__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__922__trace);
    } else if ((1U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__923__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__923__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__923__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__923__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__923__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__923__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__923__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__923__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__923__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__923__trace);
    } else if ((2U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__924__trace);
    } else if ((3U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__925__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__926__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__926__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__926__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__926__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__927__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__927__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__927__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__927__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__928__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__928__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__928__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__928__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__926__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__926__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__926__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__926__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__926__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__926__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__926__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__926__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__926__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__926__trace);
    } else if ((1U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__927__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__927__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__927__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__927__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__927__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__927__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__927__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__927__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__927__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__927__trace);
    } else if ((2U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__928__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__928__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__928__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__928__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__928__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__928__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__928__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__928__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__928__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__928__trace);
    } else if ((3U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__929__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VMemNet_noparam__ConstPool__CONST_haead36df_0;

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace);
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__val;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__val = 0;
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__rdy;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__931__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__931__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__931__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__931__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__932__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__932__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__932__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__932__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__932__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__932__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__933__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__933__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__933__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__933__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__934__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__934__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__934__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__934__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__934__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__934__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__935__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__935__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__935__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__935__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__936__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__936__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__936__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__936__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__936__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__936__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__937__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__937__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__937__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__937__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__938__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__938__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__938__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__938__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__938__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__938__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__rdy 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
        [0U];
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__val 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace, trace_str);
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__rdy) 
         & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__931__str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__931__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__931__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__931__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__931__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__931__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__931__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__931__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__931__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__931__trace);
    } else if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__rdy) 
                & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__val)))) {
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__932__num 
            = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__932__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__932__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__932__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__932__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__932__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__932__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__932__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__932__trace);
    } else if (((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__rdy)) 
                & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__933__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__933__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__933__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__933__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__933__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__933__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__933__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__933__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__933__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__933__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__934__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__934__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__934__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__934__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__934__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__934__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__934__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__934__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__934__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__rdy)) 
                      & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__935__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__935__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__935__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__935__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__935__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__935__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__935__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__935__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__935__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__935__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__936__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__936__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__936__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__936__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__936__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__936__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__936__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__936__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__936__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__937__str, VMemNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__937__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__937__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__937__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__937__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__937__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__937__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__937__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__937__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__937__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__938__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__938__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__938__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__938__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__938__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__938__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__938__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__938__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__938__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__930__trace);
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace);
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__val;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__val = 0;
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__rdy;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__940__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__940__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__940__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__940__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__941__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__941__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__941__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__941__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__941__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__941__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__942__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__942__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__942__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__942__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__943__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__943__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__943__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__943__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__943__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__943__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__944__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__944__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__944__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__944__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__945__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__945__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__945__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__945__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__945__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__945__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__946__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__946__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__946__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__946__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__947__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__947__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__947__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__947__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__947__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__947__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__rdy 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
        [1U];
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__val 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace, trace_str);
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__rdy) 
         & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__940__str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__940__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__940__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__940__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__940__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__940__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__940__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__940__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__940__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__940__trace);
    } else if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__rdy) 
                & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__val)))) {
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__941__num 
            = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__941__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__941__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__941__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__941__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__941__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__941__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__941__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__941__trace);
    } else if (((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__rdy)) 
                & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__942__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__942__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__942__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__942__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__942__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__942__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__942__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__942__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__942__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__942__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__943__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__943__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__943__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__943__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__943__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__943__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__943__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__943__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__943__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__rdy)) 
                      & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__944__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__944__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__944__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__944__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__944__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__944__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__944__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__944__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__944__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__944__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__945__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__945__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__945__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__945__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__945__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__945__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__945__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__945__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__945__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__946__str, VMemNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__946__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__946__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__946__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__946__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__946__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__946__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__946__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__946__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__946__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__947__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__947__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__947__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__947__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__947__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__947__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__947__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__947__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__947__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__939__trace);
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace);
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__val;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__val = 0;
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__rdy;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__949__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__949__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__949__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__949__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__950__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__950__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__950__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__950__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__950__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__950__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__951__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__951__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__951__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__951__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__952__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__952__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__952__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__952__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__952__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__952__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__953__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__953__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__953__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__953__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__954__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__954__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__954__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__954__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__954__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__954__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__955__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__955__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__955__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__955__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__956__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__956__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__956__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__956__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__956__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__956__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__rdy 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
        [2U];
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__val 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace, trace_str);
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__rdy) 
         & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__949__str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__949__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__949__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__949__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__949__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__949__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__949__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__949__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__949__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__949__trace);
    } else if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__rdy) 
                & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__val)))) {
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__950__num 
            = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__950__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__950__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__950__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__950__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__950__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__950__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__950__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__950__trace);
    } else if (((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__rdy)) 
                & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__951__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__951__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__951__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__951__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__951__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__951__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__951__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__951__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__951__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__951__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__952__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__952__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__952__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__952__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__952__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__952__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__952__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__952__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__952__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__rdy)) 
                      & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__953__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__953__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__953__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__953__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__953__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__953__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__953__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__953__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__953__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__953__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__954__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__954__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__954__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__954__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__954__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__954__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__954__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__954__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__954__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__955__str, VMemNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__955__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__955__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__955__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__955__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__955__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__955__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__955__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__955__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__955__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__956__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__956__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__956__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__956__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__956__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__956__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__956__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__956__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__956__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__948__trace);
}

extern const VlWide<128>/*4095:0*/ VMemNet_noparam__ConstPool__CONST_hf1afa22a_0;
extern const VlWide<128>/*4095:0*/ VMemNet_noparam__ConstPool__CONST_h803d56e6_0;

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__957__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__957__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__957__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__957__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__958__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__958__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__958__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__958__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__959__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__959__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__959__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__959__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__960__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__960__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__960__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__960__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__961__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__961__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__961__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__961__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__962__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__962__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__962__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__962__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__963__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__963__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__963__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__963__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__964__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__964__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__964__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__964__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__965__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__965__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__965__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__965__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__966__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__966__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__966__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__966__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__967__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__967__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__967__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__967__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__968__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__968__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__968__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__968__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__969__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__969__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__969__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__969__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__970__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__970__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__970__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__970__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__971__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__971__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__971__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__971__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__972__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__972__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__972__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__972__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__973__trace_str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__973__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__974__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__974__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__974__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__974__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__975__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__975__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__975__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__975__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__976__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__976__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__976__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__976__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__977__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__977__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__977__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__977__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__978__trace_str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__978__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__979__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__979__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__979__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__979__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__980__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__980__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__980__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__980__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__981__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__981__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__981__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__981__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__982__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__982__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__982__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__982__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__983__trace_str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__983__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__984__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__984__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__984__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__984__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__985__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__985__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__985__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__985__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__986__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__986__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__986__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__986__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__987__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__987__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__987__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__987__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__957__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__957__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__957__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__957__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__957__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__957__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__957__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__957__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__957__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__957__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__958__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__958__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__958__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__958__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__958__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__958__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__958__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__958__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__958__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__958__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__959__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__959__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__959__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__959__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__959__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__959__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__959__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__959__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__959__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__959__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__960__str, VMemNet_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__960__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__960__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__960__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__960__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__960__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__960__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__960__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__960__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__960__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__961__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__961__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__961__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__961__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__961__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__961__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__961__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__961__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__961__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__961__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__962__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__962__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__962__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__962__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__962__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__962__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__962__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__962__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__962__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__962__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__963__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__963__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__963__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__963__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__963__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__963__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__963__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__963__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__963__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__963__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__964__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__964__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__964__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__964__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__964__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__964__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__964__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__964__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__964__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__964__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__965__str, VMemNet_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__965__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__965__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__965__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__965__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__965__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__965__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__965__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__965__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__965__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__966__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__966__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__966__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__966__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__966__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__966__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__966__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__966__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__966__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__966__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__967__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__967__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__967__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__967__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__967__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__967__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__967__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__967__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__967__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__967__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__968__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__968__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__968__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__968__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__968__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__968__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__968__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__968__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__968__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__968__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__969__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__969__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__969__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__969__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__969__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__969__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__969__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__969__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__969__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__969__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__970__str, VMemNet_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__970__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__970__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__970__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__970__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__970__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__970__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__970__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__970__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__970__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__971__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__971__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__971__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__971__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__971__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__971__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__971__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__971__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__971__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__971__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__972__str, VMemNet_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__972__trace, trace_str);
    vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__972__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__972__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
        = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__972__trace[0U];
    vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__972__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__972__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__972__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__972__trace[0U] 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__972__trace);
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__973__trace_str, trace_str);
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__974__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__974__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__973__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__974__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__974__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__974__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__974__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__974__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__974__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__974__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__973__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__974__trace);
    } else if ((1U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__975__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__975__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__973__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__975__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__975__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__975__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__975__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__975__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__975__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__975__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__973__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__975__trace);
    } else if ((2U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__976__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__976__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__973__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__976__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__976__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__976__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__976__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__976__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__976__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__976__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__973__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__976__trace);
    } else if ((3U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__977__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__977__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__973__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__977__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__977__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__977__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__977__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__977__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__977__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__977__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__973__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__977__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__973__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__978__trace_str, trace_str);
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__979__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__979__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__978__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__979__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__979__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__979__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__979__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__979__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__979__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__979__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__978__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__979__trace);
    } else if ((1U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__980__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__980__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__978__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__980__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__980__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__980__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__980__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__980__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__980__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__980__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__978__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__980__trace);
    } else if ((2U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__981__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__981__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__978__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__981__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__981__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__981__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__981__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__981__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__981__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__981__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__978__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__981__trace);
    } else if ((3U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__982__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__982__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__978__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__982__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__982__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__982__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__982__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__982__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__982__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__982__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__978__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__982__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__978__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__983__trace_str, trace_str);
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__984__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__984__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__983__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__984__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__984__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__984__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__984__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__984__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__984__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__984__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__983__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__984__trace);
    } else if ((1U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__985__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__985__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__983__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__985__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__985__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__985__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__985__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__985__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__985__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__985__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__983__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__985__trace);
    } else if ((2U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__986__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__986__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__983__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__986__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__986__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__986__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__986__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__986__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__986__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__986__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__983__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__986__trace);
    } else if ((3U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__987__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__987__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__983__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__987__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__987__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__987__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__987__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__987__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__987__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__987__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__983__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__987__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__983__trace_str);
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__988__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__988__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__988__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__988__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__989__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__989__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__989__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__989__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__988__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__988__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__988__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__988__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__988__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__988__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__988__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__988__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__988__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__988__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__989__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__989__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__989__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__989__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__989__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__989__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__989__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__989__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__989__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__989__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__990__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__990__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__990__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__990__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__991__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__991__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__991__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__991__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__990__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__990__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__990__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__990__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__990__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__990__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__990__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__990__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__990__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__990__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__991__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__991__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__991__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__991__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__991__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__991__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__991__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__991__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__991__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__991__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__992__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__992__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__992__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__992__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__993__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__993__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__993__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__993__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__992__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__992__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__992__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__992__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__992__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__992__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__992__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__992__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__992__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__992__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__993__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__993__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__993__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__993__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__993__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__993__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__993__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__993__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__993__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__993__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__994__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__994__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__994__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__994__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__994__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__994__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__994__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__994__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__994__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__994__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__994__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__994__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__994__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__994__trace);
    } else if ((1U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__995__trace);
    } else if ((2U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__996__trace);
    } else if ((3U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__997__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__998__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__998__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__998__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__998__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__999__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__999__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__999__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__999__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__998__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__998__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__998__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__998__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__998__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__998__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__998__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__998__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__998__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__998__trace);
    } else if ((1U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__999__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__999__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__999__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__999__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__999__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__999__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__999__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__999__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__999__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__999__trace);
    } else if ((2U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1000__trace);
    } else if ((3U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1001__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1002__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1002__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1002__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1002__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1003__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1003__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1003__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1003__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1004__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1004__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1004__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1004__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1002__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1002__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1002__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1002__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1002__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1002__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1002__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1002__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1002__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1002__trace);
    } else if ((1U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1003__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1003__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1003__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1003__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1003__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1003__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1003__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1003__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1003__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1003__trace);
    } else if ((2U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1004__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1004__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1004__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1004__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1004__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1004__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1004__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1004__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1004__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1004__trace);
    } else if ((3U == MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1005__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace);
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__val;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__val = 0;
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__rdy;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1007__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1007__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1007__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1007__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1008__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1008__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1008__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1008__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1008__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1008__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1009__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1009__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1009__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1009__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1010__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1010__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1010__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1010__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1010__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1010__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1011__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1011__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1011__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1011__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1012__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1012__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1012__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1012__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1012__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1012__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1013__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1013__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1013__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1013__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1014__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1014__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1014__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1014__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1014__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1014__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__rdy 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
        [0U];
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__val 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace, trace_str);
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__rdy) 
         & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1007__str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1007__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1007__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1007__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1007__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1007__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1007__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1007__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1007__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1007__trace);
    } else if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__rdy) 
                & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__val)))) {
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1008__num 
            = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1008__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1008__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1008__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1008__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1008__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1008__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1008__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1008__trace);
    } else if (((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__rdy)) 
                & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1009__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1009__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1009__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1009__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1009__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1009__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1009__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1009__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1009__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1009__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1010__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1010__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1010__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1010__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1010__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1010__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1010__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1010__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1010__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__rdy)) 
                      & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1011__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1011__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1011__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1011__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1011__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1011__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1011__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1011__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1011__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1011__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1012__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1012__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1012__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1012__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1012__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1012__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1012__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1012__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1012__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1013__str, VMemNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1013__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1013__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1013__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1013__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1013__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1013__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1013__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1013__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1013__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1014__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1014__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1014__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1014__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1014__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1014__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1014__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1014__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1014__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1006__trace);
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace);
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__val;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__val = 0;
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__rdy;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1016__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1016__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1016__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1016__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1017__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1017__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1017__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1017__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1017__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1017__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1018__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1018__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1018__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1018__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1019__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1019__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1019__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1019__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1019__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1019__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1020__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1020__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1020__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1020__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1021__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1021__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1021__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1021__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1021__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1021__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1022__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1022__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1022__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1022__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1023__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1023__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1023__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1023__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1023__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1023__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__rdy 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
        [1U];
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__val 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace, trace_str);
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__rdy) 
         & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1016__str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1016__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1016__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1016__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1016__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1016__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1016__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1016__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1016__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1016__trace);
    } else if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__rdy) 
                & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__val)))) {
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1017__num 
            = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1017__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1017__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1017__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1017__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1017__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1017__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1017__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1017__trace);
    } else if (((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__rdy)) 
                & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1018__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1018__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1018__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1018__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1018__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1018__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1018__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1018__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1018__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1018__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1019__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1019__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1019__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1019__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1019__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1019__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1019__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1019__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1019__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__rdy)) 
                      & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1020__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1020__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1020__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1020__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1020__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1020__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1020__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1020__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1020__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1020__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1021__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1021__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1021__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1021__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1021__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1021__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1021__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1021__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1021__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1022__str, VMemNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1022__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1022__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1022__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1022__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1022__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1022__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1022__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1022__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1022__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1023__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1023__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1023__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1023__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1023__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1023__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1023__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1023__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1023__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1015__trace);
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace);
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__val;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__val = 0;
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__rdy;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1025__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1025__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1025__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1025__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1026__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1026__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1026__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1026__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1026__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1026__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1027__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1027__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1027__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1027__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1028__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1028__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1028__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1028__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1028__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1028__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1029__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1029__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1029__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1029__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1030__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1030__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1030__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1030__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1030__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1030__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1031__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1031__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1031__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1031__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1032__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1032__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1032__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1032__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1032__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1032__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__rdy 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
        [2U];
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__val 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace, trace_str);
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__rdy) 
         & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1025__str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1025__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1025__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1025__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1025__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1025__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1025__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1025__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1025__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1025__trace);
    } else if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__rdy) 
                & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__val)))) {
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1026__num 
            = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1026__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1026__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1026__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1026__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1026__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1026__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1026__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1026__trace);
    } else if (((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__rdy)) 
                & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1027__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1027__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1027__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1027__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1027__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1027__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1027__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1027__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1027__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1027__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1028__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1028__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1028__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1028__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1028__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1028__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1028__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1028__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1028__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__rdy)) 
                      & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1029__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1029__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1029__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1029__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1029__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1029__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1029__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1029__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1029__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1029__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1030__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1030__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1030__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1030__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1030__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1030__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1030__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1030__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1030__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1031__str, VMemNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1031__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1031__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1031__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1031__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1031__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1031__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1031__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1031__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1031__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1032__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1032__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1032__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1032__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1032__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1032__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1032__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1032__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1032__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1024__trace);
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace);
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__val;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__val = 0;
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__rdy;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1034__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1034__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1034__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1034__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1035__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1035__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1035__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1035__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1035__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1035__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1036__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1036__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1036__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1036__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1037__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1037__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1037__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1037__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1037__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1037__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1038__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1038__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1038__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1038__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1039__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1039__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1039__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1039__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1039__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1039__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1040__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1040__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1040__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1040__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1041__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1041__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1041__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1041__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1041__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1041__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
                                      [0U][4U] >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_msg
                           [0U][4U] >> 0x1aU)));
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__rdy 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_rdy
        [0U];
    __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__val 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__channels_cw_val
        [0U];
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace, trace_str);
    MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))))) {
        MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__rdy) 
         & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1034__str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1034__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1034__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1034__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1034__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1034__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1034__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1034__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1034__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1034__trace);
    } else if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__rdy) 
                & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__val)))) {
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1035__num 
            = MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1035__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1035__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1035__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1035__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1035__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1035__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1035__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1035__trace);
    } else if (((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__rdy)) 
                & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1036__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1036__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1036__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1036__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1036__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1036__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1036__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1036__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1036__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1036__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1037__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1037__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1037__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1037__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1037__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1037__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1037__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1037__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1037__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__rdy)) 
                      & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1038__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1038__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1038__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1038__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1038__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1038__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1038__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1038__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1038__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1038__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1039__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1039__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1039__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1039__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1039__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1039__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1039__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1039__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1039__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1040__str, VMemNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1040__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1040__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1040__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1040__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1040__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1040__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1040__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1040__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1040__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1041__num 
            = (MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1041__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1041__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1041__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1041__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1041__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1041__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1041__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1041__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1033__trace);
}
