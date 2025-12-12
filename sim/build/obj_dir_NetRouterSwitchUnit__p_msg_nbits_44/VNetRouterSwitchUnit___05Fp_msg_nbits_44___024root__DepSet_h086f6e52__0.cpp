// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNetRouterSwitchUnit___05Fp_msg_nbits_44.h for the primary calling header

#include "VNetRouterSwitchUnit___05Fp_msg_nbits_44__pch.h"
#include "VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms.h"
#include "VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root.h"

extern const VlWide<128>/*4095:0*/ VNetRouterSwitchUnit___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0;
extern const VlWide<128>/*4095:0*/ VNetRouterSwitchUnit___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VNetRouterSwitchUnit___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0;
extern const VlWide<128>/*4095:0*/ VNetRouterSwitchUnit___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0;

void VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__line_trace_TOP(VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__num_reqs;
    NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__trace;
    VL_ZERO_W(4096, __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__str;
    VL_ZERO_W(4096, __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__trace;
    VL_ZERO_W(4096, __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__str;
    VL_ZERO_W(4096, __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__trace;
    VL_ZERO_W(4096, __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__str;
    VL_ZERO_W(4096, __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__trace;
    VL_ZERO_W(4096, __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__str;
    VL_ZERO_W(4096, __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__num_reqs 
        = ((vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val
            [0U] + vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val
            [1U]) + vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val
           [2U]);
    if ((0U == NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__str, VNetRouterSwitchUnit___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__trace, trace_str);
        vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__trace[0U];
        vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__trace[0U] 
            = vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__trace);
    } else if ((1U == NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__str, VNetRouterSwitchUnit___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__trace, trace_str);
        vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__trace[0U];
        vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__trace[0U] 
            = vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__trace);
    } else if ((2U == NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__str, VNetRouterSwitchUnit___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__trace, trace_str);
        vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__trace[0U];
        vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__trace[0U] 
            = vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__trace);
    } else if ((3U == NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__str, VNetRouterSwitchUnit___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__trace, trace_str);
        vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__trace[0U];
        vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__trace[0U] 
            = vlSymsp->TOP.NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__trace);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___dump_triggers__ico(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG

void VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_triggers__ico(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___dump_triggers__act(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG

void VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_triggers__act(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root___dump_triggers__act(vlSelf);
    }
#endif
}
