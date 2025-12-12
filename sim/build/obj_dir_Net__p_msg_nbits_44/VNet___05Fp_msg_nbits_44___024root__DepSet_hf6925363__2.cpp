// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNet___05Fp_msg_nbits_44.h for the primary calling header

#include "VNet___05Fp_msg_nbits_44__pch.h"
#include "VNet___05Fp_msg_nbits_44__Syms.h"
#include "VNet___05Fp_msg_nbits_44___024root.h"

extern const VlWide<128>/*4095:0*/ VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0;

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__272__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__272__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__272__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__272__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__273__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__273__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__273__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__273__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__272__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__272__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__272__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__272__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__272__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__272__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__272__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__272__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__272__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__272__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__273__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__273__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__273__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__273__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__273__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__273__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__273__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__273__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__273__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__273__trace);
    }
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__274__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__274__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__274__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__274__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__275__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__275__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__275__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__275__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__274__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__274__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__274__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__274__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__274__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__274__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__274__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__274__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__274__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__274__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__275__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__275__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__275__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__275__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__275__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__275__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__275__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__275__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__275__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__275__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0;
extern const VlWide<128>/*4095:0*/ VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0;

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__num_reqs;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__276__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__276__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__276__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__276__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__277__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__277__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__277__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__277__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__278__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__278__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__278__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__278__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__279__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__279__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__279__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__279__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__276__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__276__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__276__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__276__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__276__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__276__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__276__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__276__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__276__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__276__trace);
    } else if ((1U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__277__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__277__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__277__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__277__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__277__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__277__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__277__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__277__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__277__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__277__trace);
    } else if ((2U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__278__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__278__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__278__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__278__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__278__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__278__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__278__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__278__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__278__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__278__trace);
    } else if ((3U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__279__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__279__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__279__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__279__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__279__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__279__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__279__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__279__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__279__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__279__trace);
    }
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__num_reqs;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__280__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__280__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__280__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__280__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__281__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__281__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__281__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__281__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__282__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__282__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__282__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__282__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__283__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__283__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__283__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__283__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__280__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__280__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__280__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__280__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__280__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__280__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__280__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__280__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__280__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__280__trace);
    } else if ((1U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__281__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__281__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__281__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__281__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__281__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__281__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__281__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__281__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__281__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__281__trace);
    } else if ((2U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__282__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__282__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__282__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__282__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__282__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__282__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__282__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__282__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__282__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__282__trace);
    } else if ((3U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__283__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__283__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__283__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__283__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__283__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__283__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__283__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__283__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__283__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__283__trace);
    }
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__num_reqs;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__284__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__284__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__284__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__284__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__285__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__285__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__285__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__285__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__286__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__286__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__286__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__286__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__287__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__287__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__287__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__287__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__284__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__284__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__284__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__284__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__284__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__284__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__284__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__284__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__284__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__284__trace);
    } else if ((1U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__285__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__285__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__285__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__285__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__285__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__285__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__285__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__285__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__285__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__285__trace);
    } else if ((2U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__286__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__286__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__286__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__286__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__286__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__286__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__286__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__286__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__286__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__286__trace);
    } else if ((3U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__287__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__287__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__287__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__287__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__287__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__287__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__287__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__287__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__287__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__287__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0;

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__289__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__289__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__289__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__289__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__290__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__290__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__290__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__290__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__290__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__290__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__291__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__291__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__291__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__291__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__292__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__292__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__292__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__292__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__292__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__292__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__293__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__293__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__293__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__293__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__294__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__294__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__294__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__294__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__294__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__294__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__295__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__295__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__295__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__295__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__296__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__296__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__296__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__296__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__296__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__296__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__ostream_msg 
                                                 >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__ostream_msg 
                                   >> 0x28U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__ostream_msg 
                                                             >> 0x20U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
        [0U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__289__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__289__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__289__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__289__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__289__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__289__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__289__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__289__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__289__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__289__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__290__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__290__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__290__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__290__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__290__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__290__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__290__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__290__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__290__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__291__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__291__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__291__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__291__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__291__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__291__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__291__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__291__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__291__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__291__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__292__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__292__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__292__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__292__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__292__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__292__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__292__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__292__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__292__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__293__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__293__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__293__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__293__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__293__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__293__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__293__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__293__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__293__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__293__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__294__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__294__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__294__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__294__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__294__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__294__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__294__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__294__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__294__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__295__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__295__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__295__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__295__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__295__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__295__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__295__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__295__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__295__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__295__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__296__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__296__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__296__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__296__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__296__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__296__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__296__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__296__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__296__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__288__trace);
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__298__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__298__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__298__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__298__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__299__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__299__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__299__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__299__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__299__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__299__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__300__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__300__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__300__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__300__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__301__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__301__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__301__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__301__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__301__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__301__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__302__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__302__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__302__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__302__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__303__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__303__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__303__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__303__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__303__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__303__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__304__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__304__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__304__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__304__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__305__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__305__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__305__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__305__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__305__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__305__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__ostream_msg 
                                                 >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__ostream_msg 
                                   >> 0x28U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__ostream_msg 
                                                             >> 0x20U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
        [1U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__298__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__298__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__298__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__298__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__298__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__298__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__298__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__298__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__298__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__298__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__299__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__299__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__299__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__299__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__299__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__299__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__299__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__299__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__299__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__300__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__300__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__300__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__300__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__300__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__300__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__300__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__300__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__300__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__300__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__301__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__301__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__301__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__301__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__301__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__301__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__301__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__301__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__301__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__302__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__302__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__302__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__302__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__302__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__302__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__302__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__302__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__302__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__302__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__303__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__303__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__303__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__303__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__303__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__303__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__303__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__303__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__303__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__304__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__304__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__304__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__304__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__304__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__304__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__304__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__304__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__304__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__304__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__305__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__305__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__305__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__305__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__305__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__305__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__305__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__305__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__305__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__297__trace);
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__307__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__307__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__307__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__307__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__308__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__308__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__308__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__308__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__308__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__308__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__309__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__309__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__309__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__309__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__310__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__310__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__310__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__310__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__310__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__310__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__311__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__311__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__311__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__311__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__312__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__312__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__312__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__312__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__312__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__312__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__313__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__313__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__313__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__313__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__314__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__314__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__314__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__314__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__314__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__314__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__ostream_msg 
                                                 >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__ostream_msg 
                                   >> 0x28U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__ostream_msg 
                                                             >> 0x20U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
        [2U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__307__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__307__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__307__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__307__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__307__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__307__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__307__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__307__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__307__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__307__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__308__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__308__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__308__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__308__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__308__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__308__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__308__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__308__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__308__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__309__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__309__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__309__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__309__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__309__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__309__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__309__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__309__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__309__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__309__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__310__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__310__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__310__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__310__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__310__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__310__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__310__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__310__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__310__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__311__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__311__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__311__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__311__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__311__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__311__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__311__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__311__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__311__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__311__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__312__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__312__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__312__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__312__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__312__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__312__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__312__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__312__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__312__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__313__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__313__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__313__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__313__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__313__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__313__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__313__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__313__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__313__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__313__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__314__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__314__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__314__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__314__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__314__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__314__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__314__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__314__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__314__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__306__trace);
}

extern const VlWide<128>/*4095:0*/ VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf1afa22a_0;
extern const VlWide<128>/*4095:0*/ VNet___05Fp_msg_nbits_44__ConstPool__CONST_h803d56e6_0;

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__num_reqs;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__num_reqs;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__num_reqs;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__315__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__315__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__315__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__315__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__316__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__316__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__316__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__316__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__317__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__317__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__317__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__317__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__318__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__318__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__318__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__318__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__319__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__319__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__319__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__319__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__320__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__320__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__320__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__320__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__321__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__321__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__321__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__321__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__322__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__322__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__322__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__322__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__323__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__323__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__323__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__323__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__324__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__324__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__324__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__324__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__325__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__325__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__325__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__325__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__326__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__326__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__326__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__326__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__327__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__327__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__327__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__327__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__328__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__328__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__328__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__328__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__329__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__329__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__329__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__329__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__330__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__330__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__330__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__330__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__line_trace__331__trace_str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__line_trace__331__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__332__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__332__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__332__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__332__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__333__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__333__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__333__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__333__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__334__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__334__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__334__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__334__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__335__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__335__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__335__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__335__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__line_trace__336__trace_str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__line_trace__336__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__337__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__337__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__337__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__337__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__338__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__338__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__338__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__338__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__339__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__339__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__339__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__339__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__340__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__340__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__340__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__340__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__line_trace__341__trace_str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__line_trace__341__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__342__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__342__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__342__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__342__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__343__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__343__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__343__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__343__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__344__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__344__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__344__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__344__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__345__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__345__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__345__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__345__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__315__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__315__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__315__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__315__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__315__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__315__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__315__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__315__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__315__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__315__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__316__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__316__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__316__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__316__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__316__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__316__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__316__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__316__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__316__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__316__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__317__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__317__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__317__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__317__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__317__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__317__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__317__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__317__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__317__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__317__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__318__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__318__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__318__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__318__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__318__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__318__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__318__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__318__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__318__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__318__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__319__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__319__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__319__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__319__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__319__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__319__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__319__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__319__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__319__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__319__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__320__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__320__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__320__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__320__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__320__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__320__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__320__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__320__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__320__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__320__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__321__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__321__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__321__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__321__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__321__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__321__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__321__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__321__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__321__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__321__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__322__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__322__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__322__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__322__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__322__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__322__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__322__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__322__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__322__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__322__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__323__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__323__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__323__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__323__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__323__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__323__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__323__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__323__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__323__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__323__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__324__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__324__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__324__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__324__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__324__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__324__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__324__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__324__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__324__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__324__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__325__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__325__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__325__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__325__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__325__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__325__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__325__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__325__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__325__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__325__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__326__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__326__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__326__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__326__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__326__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__326__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__326__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__326__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__326__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__326__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__327__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__327__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__327__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__327__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__327__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__327__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__327__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__327__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__327__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__327__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__328__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__328__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__328__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__328__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__328__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__328__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__328__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__328__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__328__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__328__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__329__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__329__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__329__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__329__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__329__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__329__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__329__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__329__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__329__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__329__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__330__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__330__trace, trace_str);
    vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__330__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__330__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
        = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__330__trace[0U];
    vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__330__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__330__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__330__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__330__trace[0U] 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__vc_trace__DOT__append_str__330__trace);
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__line_trace__331__trace_str, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__332__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__332__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__line_trace__331__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__332__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__332__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__332__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__332__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__332__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__332__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__332__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__line_trace__331__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__332__trace);
    } else if ((1U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__333__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__333__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__line_trace__331__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__333__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__333__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__333__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__333__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__333__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__333__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__333__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__line_trace__331__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__333__trace);
    } else if ((2U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__334__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__334__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__line_trace__331__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__334__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__334__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__334__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__334__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__334__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__334__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__334__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__line_trace__331__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__334__trace);
    } else if ((3U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__335__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__335__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__line_trace__331__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__335__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__335__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__335__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__335__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__335__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__335__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__335__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__line_trace__331__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__335__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__line_trace__331__trace_str);
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__line_trace__336__trace_str, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__337__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__337__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__line_trace__336__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__337__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__337__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__337__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__337__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__337__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__337__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__337__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__line_trace__336__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__337__trace);
    } else if ((1U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__338__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__338__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__line_trace__336__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__338__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__338__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__338__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__338__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__338__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__338__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__338__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__line_trace__336__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__338__trace);
    } else if ((2U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__339__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__339__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__line_trace__336__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__339__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__339__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__339__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__339__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__339__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__339__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__339__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__line_trace__336__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__339__trace);
    } else if ((3U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__340__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__340__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__line_trace__336__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__340__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__340__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__340__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__340__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__340__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__340__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__340__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__line_trace__336__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__340__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__line_trace__336__trace_str);
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__line_trace__341__trace_str, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__342__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__342__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__line_trace__341__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__342__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__342__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__342__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__342__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__342__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__342__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__342__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__line_trace__341__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__342__trace);
    } else if ((1U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__343__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__343__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__line_trace__341__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__343__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__343__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__343__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__343__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__343__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__343__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__343__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__line_trace__341__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__343__trace);
    } else if ((2U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__344__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__344__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__line_trace__341__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__344__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__344__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__344__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__344__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__344__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__344__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__344__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__line_trace__341__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__344__trace);
    } else if ((3U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__345__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__345__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__line_trace__341__trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__345__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__345__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__345__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__345__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__345__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__345__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__345__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__line_trace__341__trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__345__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__line_trace__341__trace_str);
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__346__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__346__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__346__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__346__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__347__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__347__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__347__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__347__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__346__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__346__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__346__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__346__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__346__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__346__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__346__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__346__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__346__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__346__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__347__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__347__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__347__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__347__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__347__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__347__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__347__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__347__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__347__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__347__trace);
    }
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__348__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__348__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__348__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__348__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__349__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__349__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__349__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__349__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__348__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__348__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__348__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__348__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__348__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__348__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__348__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__348__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__348__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__348__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__349__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__349__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__349__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__349__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__349__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__349__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__349__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__349__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__349__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__349__trace);
    }
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__350__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__350__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__350__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__350__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__351__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__351__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__351__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__351__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__350__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__350__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__350__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__350__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__350__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__350__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__350__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__350__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__350__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__350__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__351__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__351__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__351__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__351__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__351__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__351__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__351__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__351__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__351__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__351__trace);
    }
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__num_reqs;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__352__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__352__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__352__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__352__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__353__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__353__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__353__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__353__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__354__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__354__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__354__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__354__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__355__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__355__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__355__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__355__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__352__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__352__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__352__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__352__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__352__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__352__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__352__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__352__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__352__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__352__trace);
    } else if ((1U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__353__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__353__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__353__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__353__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__353__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__353__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__353__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__353__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__353__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__353__trace);
    } else if ((2U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__354__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__354__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__354__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__354__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__354__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__354__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__354__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__354__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__354__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__354__trace);
    } else if ((3U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__355__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__355__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__355__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__355__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__355__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__355__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__355__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__355__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__355__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__355__trace);
    }
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__num_reqs;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__356__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__356__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__356__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__356__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__357__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__357__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__357__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__357__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__358__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__358__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__358__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__358__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__359__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__359__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__359__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__359__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__356__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__356__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__356__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__356__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__356__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__356__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__356__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__356__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__356__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__356__trace);
    } else if ((1U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__357__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__357__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__357__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__357__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__357__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__357__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__357__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__357__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__357__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__357__trace);
    } else if ((2U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__358__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__358__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__358__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__358__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__358__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__358__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__358__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__358__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__358__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__358__trace);
    } else if ((3U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__359__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__359__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__359__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__359__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__359__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__359__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__359__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__359__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__359__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__359__trace);
    }
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__num_reqs;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__360__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__360__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__360__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__360__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__361__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__361__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__361__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__361__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__362__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__362__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__362__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__362__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__363__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__363__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__363__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__363__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__360__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__360__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__360__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__360__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__360__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__360__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__360__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__360__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__360__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__360__trace);
    } else if ((1U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__361__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__361__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__361__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__361__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__361__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__361__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__361__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__361__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__361__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__361__trace);
    } else if ((2U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__362__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__362__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__362__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__362__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__362__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__362__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__362__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__362__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__362__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__362__trace);
    } else if ((3U == Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__363__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__363__trace, trace_str);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__363__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__363__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__363__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__363__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__363__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__363__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__363__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__363__trace);
    }
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__365__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__365__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__365__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__365__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__366__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__366__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__366__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__366__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__366__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__366__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__367__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__367__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__367__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__367__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__368__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__368__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__368__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__368__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__368__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__368__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__369__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__369__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__369__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__369__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__370__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__370__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__370__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__370__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__370__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__370__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__371__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__371__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__371__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__371__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__372__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__372__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__372__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__372__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__372__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__372__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__ostream_msg 
                                                 >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__ostream_msg 
                                   >> 0x28U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__ostream_msg 
                                                             >> 0x20U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
        [0U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__365__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__365__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__365__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__365__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__365__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__365__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__365__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__365__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__365__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__365__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__366__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__366__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__366__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__366__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__366__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__366__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__366__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__366__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__366__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__367__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__367__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__367__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__367__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__367__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__367__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__367__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__367__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__367__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__367__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__368__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__368__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__368__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__368__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__368__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__368__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__368__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__368__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__368__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__369__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__369__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__369__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__369__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__369__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__369__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__369__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__369__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__369__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__369__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__370__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__370__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__370__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__370__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__370__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__370__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__370__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__370__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__370__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__371__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__371__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__371__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__371__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__371__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__371__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__371__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__371__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__371__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__371__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__372__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__372__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__372__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__372__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__372__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__372__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__372__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__372__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__372__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__364__trace);
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__374__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__374__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__374__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__374__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__375__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__375__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__375__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__375__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__375__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__375__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__376__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__376__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__376__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__376__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__377__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__377__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__377__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__377__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__377__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__377__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__378__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__378__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__378__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__378__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__379__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__379__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__379__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__379__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__379__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__379__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__380__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__380__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__380__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__380__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__381__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__381__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__381__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__381__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__381__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__381__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__ostream_msg 
                                                 >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__ostream_msg 
                                   >> 0x28U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__ostream_msg 
                                                             >> 0x20U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
        [1U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__374__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__374__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__374__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__374__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__374__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__374__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__374__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__374__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__374__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__374__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__375__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__375__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__375__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__375__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__375__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__375__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__375__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__375__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__375__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__376__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__376__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__376__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__376__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__376__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__376__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__376__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__376__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__376__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__376__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__377__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__377__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__377__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__377__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__377__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__377__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__377__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__377__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__377__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__378__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__378__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__378__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__378__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__378__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__378__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__378__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__378__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__378__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__378__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__379__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__379__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__379__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__379__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__379__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__379__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__379__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__379__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__379__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__380__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__380__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__380__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__380__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__380__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__380__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__380__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__380__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__380__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__380__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__381__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__381__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__381__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__381__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__381__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__381__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__381__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__381__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__381__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__373__trace);
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__383__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__383__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__383__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__383__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__384__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__384__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__384__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__384__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__384__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__384__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__385__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__385__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__385__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__385__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__386__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__386__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__386__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__386__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__386__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__386__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__387__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__387__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__387__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__387__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__388__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__388__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__388__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__388__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__388__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__388__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__389__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__389__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__389__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__389__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__390__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__390__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__390__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__390__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__390__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__390__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__ostream_msg 
                                                 >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__ostream_msg 
                                   >> 0x28U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__ostream_msg 
                                                             >> 0x20U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
        [2U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__383__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__383__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__383__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__383__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__383__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__383__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__383__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__383__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__383__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__383__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__384__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__384__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__384__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__384__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__384__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__384__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__384__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__384__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__384__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__385__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__385__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__385__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__385__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__385__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__385__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__385__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__385__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__385__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__385__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__386__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__386__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__386__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__386__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__386__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__386__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__386__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__386__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__386__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__387__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__387__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__387__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__387__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__387__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__387__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__387__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__387__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__387__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__387__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__388__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__388__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__388__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__388__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__388__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__388__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__388__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__388__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__388__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__389__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__389__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__389__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__389__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__389__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__389__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__389__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__389__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__389__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__389__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__390__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__390__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__390__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__390__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__390__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__390__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__390__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__390__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__390__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__382__trace);
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__392__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__392__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__392__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__392__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__393__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__393__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__393__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__393__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__393__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__393__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__394__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__394__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__394__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__394__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__395__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__395__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__395__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__395__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__395__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__395__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__396__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__396__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__396__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__396__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__397__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__397__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__397__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__397__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__397__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__397__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__398__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__398__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__398__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__398__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__399__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__399__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__399__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__399__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__399__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__399__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_msg
                                              [0U] 
                                              >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_msg
                                   [0U] >> 0x28U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_rdy
        [0U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_val
        [0U];
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__392__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__392__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__392__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__392__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__392__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__392__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__392__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__392__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__392__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__392__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__393__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__393__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__393__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__393__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__393__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__393__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__393__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__393__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__393__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__394__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__394__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__394__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__394__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__394__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__394__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__394__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__394__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__394__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__394__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__395__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__395__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__395__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__395__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__395__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__395__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__395__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__395__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__395__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__396__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__396__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__396__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__396__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__396__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__396__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__396__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__396__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__396__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__396__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__397__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__397__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__397__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__397__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__397__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__397__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__397__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__397__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__397__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__398__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__398__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__398__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__398__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__398__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__398__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__398__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__398__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__398__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__398__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__399__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__399__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__399__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__399__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__399__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__399__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__399__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__399__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__399__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__391__trace);
}

void VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__line_trace_TOP(VNet___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root____Vdpiexp_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__val;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__val = 0;
    CData/*0:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__rdy;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__401__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__401__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__401__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__401__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__402__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__402__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__402__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__402__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__402__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__402__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__403__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__403__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__403__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__403__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__404__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__404__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__404__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__404__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__404__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__404__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__405__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__405__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__405__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__405__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__406__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__406__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__406__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__406__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__406__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__406__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__407__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__407__trace);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__407__str;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__407__str);
    VlWide<128>/*4095:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__408__trace;
    VL_ZERO_W(4096, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__408__trace);
    CData/*7:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__408__char;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__408__char = 0;
    IData/*31:0*/ __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__408__num;
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__408__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_msg
                                              [0U] 
                                              >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_msg
                                   [0U] >> 0x28U))));
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__str, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__rdy 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_rdy
        [0U];
    __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__val 
        = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_val
        [0U];
    VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace, trace_str);
    Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))))) {
        Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__rdy) 
         & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__401__str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__str);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__401__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__401__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__401__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__401__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__401__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__401__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__401__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__401__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__401__trace);
    } else if (((IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__rdy) 
                & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__val)))) {
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__402__num 
            = Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__402__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__402__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__402__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__402__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__402__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__402__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__402__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__402__trace);
    } else if (((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__rdy)) 
                & (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__val))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__403__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__403__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__403__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__403__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__403__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__403__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__403__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__403__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__403__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__403__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__404__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__404__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__404__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__404__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__404__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__404__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__404__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__404__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__404__trace);
    } else if ((1U & ((~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__rdy)) 
                      & (~ (IData)(__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__val))))) {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__405__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__405__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__405__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__405__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__405__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__405__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__405__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__405__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__405__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__405__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__406__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__406__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__406__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__406__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__406__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__406__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__406__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__406__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__406__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__407__str, VNet___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__407__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__407__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__407__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__407__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__407__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__407__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__407__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__407__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__407__trace);
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__408__num 
            = (Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__408__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__408__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__408__trace[0U];
        vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__408__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__408__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__408__char);
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__408__trace[0U] 
            = vlSymsp->TOP.Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__408__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_Net___05Fp_msg_nbits_44__DOT__v__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__400__trace);
}
