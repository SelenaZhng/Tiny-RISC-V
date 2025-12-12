// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCoreSys_noparam.h for the primary calling header

#include "VSingleCoreSys_noparam__pch.h"
#include "VSingleCoreSys_noparam__Syms.h"
#include "VSingleCoreSys_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_haead36df_0;

void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__type_str;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__type_str = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace);
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__val;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__val = 0;
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__202__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__202__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__202__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__202__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__203__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__203__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__203__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__203__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__203__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__203__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__204__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__204__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__204__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__204__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__205__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__205__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__205__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__205__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__205__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__205__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__206__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__206__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__206__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__206__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__207__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__207__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__207__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__207__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__207__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__207__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__208__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__208__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__208__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__208__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__209__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__209__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__209__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__209__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__209__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__209__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] 
                           >> 0xaU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                                        >> 0xaU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                                         >> 0xaU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__str
                  ,"%s",0,16,SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__str, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__str);
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__rdy 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache_reqstream_rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__val 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache_reqstream_val;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__rdy) 
         & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__202__str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__str);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__202__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__202__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__202__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__202__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__202__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__202__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__202__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__202__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__202__trace);
    } else if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__rdy) 
                & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__val)))) {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__203__num 
            = SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__203__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__203__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__203__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__203__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__203__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__203__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__203__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__203__trace);
    } else if (((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__rdy)) 
                & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__204__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__204__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__204__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__204__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__204__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__204__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__204__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__204__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__204__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__204__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__205__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__205__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__205__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__205__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__205__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__205__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__205__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__205__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__205__trace);
    } else if ((1U & ((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__rdy)) 
                      & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__val))))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__206__str, VSingleCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__206__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__206__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__206__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__206__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__206__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__206__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__206__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__206__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__206__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__207__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__207__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__207__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__207__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__207__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__207__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__207__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__207__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__207__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__208__str, VSingleCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__208__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__208__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__208__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__208__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__208__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__208__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__208__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__208__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__208__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__209__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__209__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__209__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__209__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__209__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__209__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__209__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__209__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__209__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__201__trace);
}

void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__type_str;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__type_str = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace);
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__val;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__val = 0;
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__211__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__211__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__211__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__211__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__212__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__212__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__212__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__212__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__212__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__212__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__213__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__213__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__213__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__213__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__214__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__214__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__214__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__214__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__214__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__214__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__215__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__215__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__215__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__215__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__216__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__216__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__216__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__216__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__216__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__216__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__217__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__217__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__217__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__217__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__218__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__218__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__218__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__218__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__218__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__218__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                           >> 0xaU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                                        >> 0xaU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                                         >> 0xaU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__str
                  ,"%s",0,16,SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__str, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__str);
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__rdy 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache_reqstream_rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__val 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache_reqstream_val;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__rdy) 
         & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__211__str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__str);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__211__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__211__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__211__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__211__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__211__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__211__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__211__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__211__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__211__trace);
    } else if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__rdy) 
                & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__val)))) {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__212__num 
            = SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__212__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__212__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__212__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__212__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__212__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__212__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__212__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__212__trace);
    } else if (((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__rdy)) 
                & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__213__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__213__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__213__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__213__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__213__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__213__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__213__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__213__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__213__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__213__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__214__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__214__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__214__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__214__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__214__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__214__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__214__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__214__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__214__trace);
    } else if ((1U & ((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__rdy)) 
                      & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__val))))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__215__str, VSingleCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__215__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__215__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__215__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__215__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__215__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__215__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__215__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__215__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__215__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__216__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__216__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__216__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__216__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__216__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__216__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__216__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__216__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__216__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__217__str, VSingleCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__217__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__217__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__217__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__217__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__217__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__217__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__217__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__217__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__217__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__218__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__218__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__218__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__218__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__218__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__218__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__218__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__218__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__218__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__210__trace);
}

void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__type_str;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__type_str = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace);
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__val;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__val = 0;
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__220__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__220__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__220__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__220__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__221__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__221__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__221__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__221__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__221__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__221__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__222__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__222__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__222__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__222__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__223__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__223__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__223__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__223__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__223__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__223__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__224__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__224__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__224__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__224__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__225__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__225__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__225__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__225__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__225__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__225__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__226__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__226__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__226__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__226__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__227__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__227__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__227__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__227__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__227__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__227__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__type_str 
        = ((0U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cacheresp_type))
            ? 0x7264U : ((1U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cacheresp_type))
                          ? 0x7772U : ((2U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cacheresp_type))
                                        ? 0x776eU : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__str
                  ,"%s",0,16,SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__str, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__str);
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__rdy 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache_respstream_rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__val 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache_respstream_val;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__rdy) 
         & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__220__str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__str);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__220__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__220__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__220__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__220__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__220__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__220__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__220__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__220__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__220__trace);
    } else if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__rdy) 
                & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__val)))) {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__221__num 
            = SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__221__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__221__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__221__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__221__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__221__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__221__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__221__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__221__trace);
    } else if (((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__rdy)) 
                & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__222__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__222__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__222__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__222__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__222__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__222__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__222__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__222__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__222__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__222__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__223__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__223__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__223__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__223__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__223__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__223__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__223__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__223__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__223__trace);
    } else if ((1U & ((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__rdy)) 
                      & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__val))))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__224__str, VSingleCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__224__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__224__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__224__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__224__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__224__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__224__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__224__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__224__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__224__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__225__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__225__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__225__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__225__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__225__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__225__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__225__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__225__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__225__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__226__str, VSingleCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__226__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__226__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__226__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__226__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__226__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__226__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__226__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__226__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__226__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__227__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__227__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__227__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__227__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__227__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__227__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__227__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__227__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__227__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__219__trace);
}

void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__type_str;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__type_str = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace);
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__val;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__val = 0;
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__229__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__229__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__229__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__229__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__230__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__230__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__230__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__230__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__230__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__230__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__231__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__231__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__231__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__231__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__232__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__232__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__232__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__232__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__232__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__232__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__233__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__233__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__233__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__233__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__234__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__234__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__234__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__234__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__234__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__234__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__235__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__235__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__235__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__235__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__236__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__236__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__236__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__236__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__236__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__236__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__type_str 
        = ((0U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cacheresp_type))
            ? 0x7264U : ((1U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cacheresp_type))
                          ? 0x7772U : ((2U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cacheresp_type))
                                        ? 0x776eU : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__str
                  ,"%s",0,16,SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__str, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__str);
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__rdy 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache_respstream_rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__val 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache_respstream_val;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__rdy) 
         & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__229__str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__str);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__229__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__229__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__229__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__229__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__229__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__229__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__229__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__229__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__229__trace);
    } else if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__rdy) 
                & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__val)))) {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__230__num 
            = SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__230__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__230__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__230__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__230__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__230__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__230__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__230__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__230__trace);
    } else if (((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__rdy)) 
                & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__231__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__231__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__231__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__231__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__231__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__231__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__231__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__231__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__231__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__231__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__232__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__232__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__232__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__232__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__232__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__232__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__232__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__232__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__232__trace);
    } else if ((1U & ((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__rdy)) 
                      & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__val))))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__233__str, VSingleCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__233__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__233__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__233__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__233__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__233__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__233__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__233__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__233__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__233__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__234__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__234__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__234__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__234__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__234__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__234__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__234__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__234__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__234__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__235__str, VSingleCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__235__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__235__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__235__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__235__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__235__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__235__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__235__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__235__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__235__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__236__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__236__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__236__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__236__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__236__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__236__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__236__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__236__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__236__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__228__trace);
}

extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h7ed547c1_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h296ef16f_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h56610484_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h0566f112_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h777355b7_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_hed8640c4_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_hb98e3b6b_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_ha1593b7e_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_he2533c7c_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h97a3ee4e_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_hd61c3baa_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_hf42f8d5f_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h17de8ffe_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_hdbedbe02_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h89919522_0;

void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0;
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1;
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__237__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__237__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__237__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__237__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__238__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__238__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__238__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__238__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__239__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__239__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__239__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__239__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__240__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__240__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__240__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__240__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__241__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__241__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__241__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__241__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__242__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__242__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__242__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__242__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__243__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__243__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__243__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__243__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__244__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__244__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__244__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__244__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__245__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__245__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__245__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__245__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__246__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__246__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__246__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__246__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__247__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__247__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__247__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__247__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__248__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__248__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__248__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__248__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__249__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__249__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__249__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__249__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__250__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__250__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__250__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__250__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__251__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__251__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__251__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__251__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__252__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__252__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__252__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__252__str);
    // Body
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__237__str, VSingleCoreSys_noparam__ConstPool__CONST_h7ed547c1_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__237__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__237__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__237__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
    }
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__237__trace[0U];
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__237__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__237__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__237__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__237__trace[0U] 
        = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__237__trace);
    if ((0x10U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__238__str, VSingleCoreSys_noparam__ConstPool__CONST_h296ef16f_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__238__trace, trace_str);
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__238__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__238__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
        }
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__238__trace[0U];
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__238__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__238__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__238__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__238__trace[0U] 
            = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__238__trace);
    } else if ((8U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__239__str, VSingleCoreSys_noparam__ConstPool__CONST_h296ef16f_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__239__trace, trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__239__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__239__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__239__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__239__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__239__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__239__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__239__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__239__trace);
        } else if ((2U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__240__str, VSingleCoreSys_noparam__ConstPool__CONST_h56610484_0);
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__240__trace, trace_str);
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__240__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__240__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
                }
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__240__trace[0U];
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__240__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__240__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__240__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__240__trace[0U] 
                    = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__240__trace);
            } else {
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__241__str, VSingleCoreSys_noparam__ConstPool__CONST_h0566f112_0);
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__241__trace, trace_str);
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__241__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__241__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
                }
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__241__trace[0U];
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__241__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__241__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__241__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__241__trace[0U] 
                    = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__241__trace);
            }
        } else if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__242__str, VSingleCoreSys_noparam__ConstPool__CONST_h777355b7_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__242__trace, trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__242__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__242__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__242__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__242__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__242__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__242__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__242__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__242__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__243__str, VSingleCoreSys_noparam__ConstPool__CONST_hed8640c4_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__243__trace, trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__243__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__243__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__243__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__243__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__243__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__243__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__243__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__243__trace);
        }
    } else if ((4U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        if ((2U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__244__str, VSingleCoreSys_noparam__ConstPool__CONST_hb98e3b6b_0);
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__244__trace, trace_str);
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__244__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__244__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
                }
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__244__trace[0U];
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__244__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__244__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__244__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__244__trace[0U] 
                    = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__244__trace);
            } else {
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__245__str, VSingleCoreSys_noparam__ConstPool__CONST_ha1593b7e_0);
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__245__trace, trace_str);
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__245__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__245__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
                }
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__245__trace[0U];
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__245__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__245__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__245__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__245__trace[0U] 
                    = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__245__trace);
            }
        } else if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__246__str, VSingleCoreSys_noparam__ConstPool__CONST_he2533c7c_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__246__trace, trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__246__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__246__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__246__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__246__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__246__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__246__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__246__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__246__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__247__str, VSingleCoreSys_noparam__ConstPool__CONST_h97a3ee4e_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__247__trace, trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__247__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__247__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__247__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__247__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__247__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__247__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__247__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__247__trace);
        }
    } else if ((2U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__248__str, VSingleCoreSys_noparam__ConstPool__CONST_hd61c3baa_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__248__trace, trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__248__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__248__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__248__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__248__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__248__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__248__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__248__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__248__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__249__str, VSingleCoreSys_noparam__ConstPool__CONST_hf42f8d5f_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__249__trace, trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__249__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__249__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__249__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__249__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__249__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__249__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__249__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__249__trace);
        }
    } else if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__250__str, VSingleCoreSys_noparam__ConstPool__CONST_h17de8ffe_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__250__trace, trace_str);
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__250__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__250__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
        }
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__250__trace[0U];
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__250__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__250__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__250__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__250__trace[0U] 
            = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__250__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__251__str, VSingleCoreSys_noparam__ConstPool__CONST_hdbedbe02_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__251__trace, trace_str);
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__251__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__251__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
        }
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__251__trace[0U];
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__251__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__251__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__251__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__251__trace[0U] 
            = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__251__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__252__str, VSingleCoreSys_noparam__ConstPool__CONST_h89919522_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__252__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__252__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__252__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
    }
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__252__trace[0U];
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__252__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__252__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__252__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__252__trace[0U] 
        = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__252__trace);
}

void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__type_str;
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace);
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__val;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__val = 0;
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__268__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__268__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__268__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__268__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__269__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__269__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__269__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__269__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__269__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__269__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__270__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__270__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__270__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__270__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__271__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__271__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__271__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__271__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__271__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__271__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__272__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__272__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__272__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__272__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__273__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__273__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__273__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__273__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__273__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__273__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__274__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__274__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__274__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__274__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__275__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__275__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__275__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__275__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__275__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__275__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] 
                           >> 0xaU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                                        >> 0xaU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                                         >> 0xaU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__str
                  ,"%s",0,16,SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__str, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__rdy 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache_reqstream_rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__val 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache_reqstream_val;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__rdy) 
         & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__268__str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__str);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__268__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__268__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__268__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__268__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__268__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__268__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__268__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__268__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__268__trace);
    } else if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__rdy) 
                & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__val)))) {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__269__num 
            = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__269__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__269__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__269__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__269__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__269__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__269__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__269__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__269__trace);
    } else if (((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__rdy)) 
                & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__270__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__270__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__270__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__270__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__270__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__270__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__270__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__270__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__270__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__270__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__271__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__271__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__271__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__271__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__271__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__271__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__271__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__271__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__271__trace);
    } else if ((1U & ((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__rdy)) 
                      & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__val))))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__272__str, VSingleCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__272__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__272__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__272__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__272__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__272__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__272__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__272__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__272__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__272__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__273__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__273__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__273__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__273__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__273__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__273__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__273__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__273__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__273__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__274__str, VSingleCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__274__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__274__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__274__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__274__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__274__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__274__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__274__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__274__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__274__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__275__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__275__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__275__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__275__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__275__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__275__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__275__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__275__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__275__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__267__trace);
}

void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__type_str;
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__type_str = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1;
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace);
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__val;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__val = 0;
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__277__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__277__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__277__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__277__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__278__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__278__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__278__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__278__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__278__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__278__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__279__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__279__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__279__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__279__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__280__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__280__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__280__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__280__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__280__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__280__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__281__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__281__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__281__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__281__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__282__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__282__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__282__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__282__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__282__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__282__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__283__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__283__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__283__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__283__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__284__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__284__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__284__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__284__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__284__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__284__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__type_str 
        = ((0U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cacheresp_type))
            ? 0x7264U : ((1U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cacheresp_type))
                          ? 0x7772U : ((2U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cacheresp_type))
                                        ? 0x776eU : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__str
                  ,"%s",0,16,SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__str, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__str);
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__rdy 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache_respstream_val;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__val 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache_respstream_val;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__rdy) 
         & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__277__str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__str);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__277__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__277__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__277__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__277__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__277__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__277__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__277__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__277__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__277__trace);
    } else if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__rdy) 
                & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__val)))) {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__278__num 
            = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__278__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__278__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__278__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__278__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__278__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__278__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__278__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__278__trace);
    } else if (((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__rdy)) 
                & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__279__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__279__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__279__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__279__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__279__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__279__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__279__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__279__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__279__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__279__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__280__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__280__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__280__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__280__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__280__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__280__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__280__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__280__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__280__trace);
    } else if ((1U & ((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__rdy)) 
                      & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__val))))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__281__str, VSingleCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__281__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__281__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__281__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__281__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__281__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__281__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__281__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__281__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__281__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__282__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__282__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__282__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__282__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__282__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__282__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__282__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__282__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__282__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__283__str, VSingleCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__283__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__283__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__283__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__283__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__283__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__283__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__283__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__283__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__283__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__284__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__284__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__284__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__284__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__284__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__284__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__284__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__284__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__284__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__276__trace);
}

void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str;
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace);
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__val;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__val = 0;
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__286__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__286__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__286__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__286__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__287__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__287__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__287__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__287__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__287__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__287__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__288__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__288__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__288__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__288__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__289__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__289__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__289__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__289__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__289__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__289__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__290__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__290__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__290__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__290__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__291__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__291__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__291__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__291__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__291__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__291__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__292__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__292__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__292__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__292__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__293__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__293__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__293__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__293__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__293__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__293__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.imem_reqstream_msg[5U] 
                           >> 0xcU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.imem_reqstream_msg[5U] 
                                                        >> 0xcU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.imem_reqstream_msg[5U] 
                                                         >> 0xcU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__str
                  ,"%s",0,16,SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__str, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__rdy 
        = vlSymsp->TOP.imem_reqstream_rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__val 
        = vlSymsp->TOP.imem_reqstream_val;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__rdy) 
         & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__286__str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__str);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__286__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__286__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__286__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__286__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__286__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__286__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__286__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__286__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__286__trace);
    } else if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__rdy) 
                & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__val)))) {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__287__num 
            = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__287__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__287__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__287__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__287__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__287__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__287__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__287__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__287__trace);
    } else if (((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__rdy)) 
                & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__288__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__288__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__288__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__288__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__288__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__288__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__288__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__288__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__288__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__288__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__289__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__289__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__289__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__289__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__289__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__289__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__289__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__289__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__289__trace);
    } else if ((1U & ((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__rdy)) 
                      & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__val))))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__290__str, VSingleCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__290__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__290__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__290__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__290__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__290__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__290__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__290__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__290__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__290__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__291__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__291__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__291__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__291__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__291__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__291__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__291__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__291__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__291__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__292__str, VSingleCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__292__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__292__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__292__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__292__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__292__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__292__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__292__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__292__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__292__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__293__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__293__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__293__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__293__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__293__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__293__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__293__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__293__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__293__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__285__trace);
}

void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__type_str;
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1;
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace);
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__val;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__val = 0;
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__295__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__295__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__295__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__295__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__296__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__296__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__296__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__296__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__296__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__296__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__297__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__297__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__297__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__297__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__298__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__298__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__298__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__298__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__298__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__298__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__299__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__299__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__299__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__299__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__300__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__300__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__300__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__300__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__300__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__300__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__301__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__301__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__301__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__301__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__302__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__302__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__302__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__302__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__302__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__302__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.imem_respstream_msg[4U] 
                           >> 0xeU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.imem_respstream_msg[4U] 
                                                        >> 0xeU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.imem_respstream_msg[4U] 
                                                         >> 0xeU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__str
                  ,"%s",0,16,SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__str, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__rdy 
        = vlSymsp->TOP.imem_respstream_rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__val 
        = vlSymsp->TOP.imem_respstream_val;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__rdy) 
         & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__295__str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__str);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__295__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__295__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__295__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__295__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__295__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__295__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__295__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__295__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__295__trace);
    } else if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__rdy) 
                & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__val)))) {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__296__num 
            = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__296__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__296__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__296__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__296__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__296__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__296__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__296__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__296__trace);
    } else if (((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__rdy)) 
                & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__297__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__297__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__297__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__297__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__297__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__297__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__297__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__297__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__297__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__297__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__298__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__298__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__298__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__298__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__298__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__298__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__298__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__298__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__298__trace);
    } else if ((1U & ((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__rdy)) 
                      & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__val))))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__299__str, VSingleCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__299__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__299__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__299__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__299__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__299__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__299__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__299__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__299__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__299__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__300__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__300__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__300__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__300__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__300__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__300__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__300__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__300__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__300__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__301__str, VSingleCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__301__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__301__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__301__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__301__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__301__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__301__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__301__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__301__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__301__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__302__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__302__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__302__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__302__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__302__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__302__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__302__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__302__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__302__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__294__trace);
}

void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__303__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__303__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__303__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__303__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__304__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__304__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__304__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__304__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__305__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__305__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__305__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__305__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__306__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__306__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__306__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__306__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__307__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__307__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__307__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__307__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__308__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__308__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__308__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__308__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__309__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__309__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__309__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__309__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__310__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__310__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__310__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__310__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__311__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__311__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__311__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__311__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__312__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__312__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__312__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__312__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__313__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__313__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__313__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__313__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__314__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__314__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__314__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__314__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__315__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__315__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__315__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__315__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__316__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__316__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__316__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__316__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__317__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__317__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__317__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__317__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__318__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__318__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__318__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__318__str);
    // Body
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__303__str, VSingleCoreSys_noparam__ConstPool__CONST_h7ed547c1_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__303__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__303__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__303__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
    }
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__303__trace[0U];
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__303__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__303__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__303__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__303__trace[0U] 
        = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__303__trace);
    if ((0x10U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__304__str, VSingleCoreSys_noparam__ConstPool__CONST_h296ef16f_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__304__trace, trace_str);
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__304__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__304__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
        }
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__304__trace[0U];
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__304__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__304__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__304__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__304__trace[0U] 
            = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__304__trace);
    } else if ((8U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__305__str, VSingleCoreSys_noparam__ConstPool__CONST_h296ef16f_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__305__trace, trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__305__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__305__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__305__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__305__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__305__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__305__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__305__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__305__trace);
        } else if ((2U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__306__str, VSingleCoreSys_noparam__ConstPool__CONST_h56610484_0);
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__306__trace, trace_str);
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__306__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__306__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
                }
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__306__trace[0U];
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__306__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__306__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__306__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__306__trace[0U] 
                    = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__306__trace);
            } else {
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__307__str, VSingleCoreSys_noparam__ConstPool__CONST_h0566f112_0);
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__307__trace, trace_str);
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__307__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__307__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
                }
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__307__trace[0U];
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__307__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__307__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__307__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__307__trace[0U] 
                    = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__307__trace);
            }
        } else if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__308__str, VSingleCoreSys_noparam__ConstPool__CONST_h777355b7_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__308__trace, trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__308__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__308__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__308__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__308__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__308__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__308__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__308__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__308__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__309__str, VSingleCoreSys_noparam__ConstPool__CONST_hed8640c4_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__309__trace, trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__309__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__309__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__309__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__309__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__309__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__309__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__309__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__309__trace);
        }
    } else if ((4U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((2U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__310__str, VSingleCoreSys_noparam__ConstPool__CONST_hb98e3b6b_0);
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__310__trace, trace_str);
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__310__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__310__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
                }
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__310__trace[0U];
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__310__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__310__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__310__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__310__trace[0U] 
                    = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__310__trace);
            } else {
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__311__str, VSingleCoreSys_noparam__ConstPool__CONST_ha1593b7e_0);
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__311__trace, trace_str);
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__311__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__311__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
                }
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__311__trace[0U];
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__311__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__311__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__311__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__311__trace[0U] 
                    = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__311__trace);
            }
        } else if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__312__str, VSingleCoreSys_noparam__ConstPool__CONST_he2533c7c_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__312__trace, trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__312__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__312__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__312__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__312__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__312__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__312__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__312__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__312__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__313__str, VSingleCoreSys_noparam__ConstPool__CONST_h97a3ee4e_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__313__trace, trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__313__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__313__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__313__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__313__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__313__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__313__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__313__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__313__trace);
        }
    } else if ((2U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__314__str, VSingleCoreSys_noparam__ConstPool__CONST_hd61c3baa_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__314__trace, trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__314__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__314__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__314__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__314__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__314__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__314__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__314__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__314__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__315__str, VSingleCoreSys_noparam__ConstPool__CONST_hf42f8d5f_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__315__trace, trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__315__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__315__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__315__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__315__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__315__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__315__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__315__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__315__trace);
        }
    } else if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__316__str, VSingleCoreSys_noparam__ConstPool__CONST_h17de8ffe_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__316__trace, trace_str);
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__316__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__316__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
        }
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__316__trace[0U];
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__316__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__316__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__316__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__316__trace[0U] 
            = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__316__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__317__str, VSingleCoreSys_noparam__ConstPool__CONST_hdbedbe02_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__317__trace, trace_str);
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__317__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__317__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
        }
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__317__trace[0U];
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__317__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__317__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__317__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__317__trace[0U] 
            = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__317__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__318__str, VSingleCoreSys_noparam__ConstPool__CONST_h89919522_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__318__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__318__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__318__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
    }
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__318__trace[0U];
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__318__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__318__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__318__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__318__trace[0U] 
        = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__318__trace);
}

void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__type_str;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__val;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__val = 0;
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__334__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__334__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__334__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__334__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__335__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__335__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__335__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__335__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__335__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__335__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__336__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__336__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__336__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__336__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__337__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__337__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__337__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__337__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__337__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__337__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__338__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__338__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__338__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__338__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__339__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__339__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__339__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__339__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__339__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__339__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__340__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__340__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__340__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__340__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__341__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__341__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__341__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__341__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__341__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__341__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                           >> 0xaU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                                        >> 0xaU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                                         >> 0xaU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__str
                  ,"%s",0,16,SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__str, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__rdy 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache_reqstream_rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__val 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache_reqstream_val;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__rdy) 
         & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__334__str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__str);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__334__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__334__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__334__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__334__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__334__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__334__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__334__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__334__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__334__trace);
    } else if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__rdy) 
                & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__val)))) {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__335__num 
            = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__335__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__335__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__335__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__335__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__335__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__335__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__335__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__335__trace);
    } else if (((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__rdy)) 
                & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__336__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__336__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__336__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__336__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__336__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__336__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__336__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__336__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__336__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__336__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__337__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__337__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__337__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__337__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__337__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__337__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__337__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__337__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__337__trace);
    } else if ((1U & ((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__rdy)) 
                      & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__val))))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__338__str, VSingleCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__338__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__338__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__338__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__338__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__338__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__338__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__338__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__338__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__338__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__339__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__339__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__339__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__339__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__339__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__339__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__339__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__339__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__339__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__340__str, VSingleCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__340__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__340__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__340__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__340__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__340__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__340__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__340__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__340__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__340__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__341__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__341__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__341__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__341__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__341__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__341__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__341__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__341__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__341__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__333__trace);
}

void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__type_str;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__type_str = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace);
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__val;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__val = 0;
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__343__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__343__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__343__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__343__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__344__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__344__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__344__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__344__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__344__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__344__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__345__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__345__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__345__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__345__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__346__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__346__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__346__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__346__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__346__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__346__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__347__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__347__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__347__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__347__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__348__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__348__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__348__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__348__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__348__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__348__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__349__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__349__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__349__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__349__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__350__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__350__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__350__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__350__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__350__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__350__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__type_str 
        = ((0U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cacheresp_type))
            ? 0x7264U : ((1U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cacheresp_type))
                          ? 0x7772U : ((2U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cacheresp_type))
                                        ? 0x776eU : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__str
                  ,"%s",0,16,SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__str, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__str);
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__rdy 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache_respstream_val;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__val 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache_respstream_val;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__rdy) 
         & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__343__str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__str);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__343__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__343__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__343__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__343__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__343__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__343__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__343__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__343__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__343__trace);
    } else if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__rdy) 
                & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__val)))) {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__344__num 
            = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__344__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__344__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__344__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__344__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__344__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__344__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__344__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__344__trace);
    } else if (((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__rdy)) 
                & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__345__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__345__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__345__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__345__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__345__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__345__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__345__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__345__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__345__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__345__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__346__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__346__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__346__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__346__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__346__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__346__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__346__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__346__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__346__trace);
    } else if ((1U & ((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__rdy)) 
                      & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__val))))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__347__str, VSingleCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__347__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__347__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__347__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__347__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__347__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__347__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__347__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__347__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__347__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__348__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__348__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__348__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__348__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__348__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__348__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__348__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__348__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__348__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__349__str, VSingleCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__349__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__349__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__349__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__349__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__349__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__349__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__349__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__349__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__349__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__350__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__350__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__350__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__350__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__350__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__350__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__350__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__350__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__350__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__342__trace);
}

void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace);
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__val;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__val = 0;
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__352__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__352__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__352__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__352__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__353__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__353__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__353__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__353__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__353__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__353__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__354__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__354__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__354__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__354__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__355__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__355__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__355__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__355__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__355__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__355__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__356__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__356__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__356__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__356__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__357__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__357__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__357__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__357__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__357__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__357__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__358__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__358__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__358__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__358__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__359__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__359__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__359__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__359__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__359__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__359__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.dmem_reqstream_msg[5U] 
                           >> 0xcU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.dmem_reqstream_msg[5U] 
                                                        >> 0xcU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.dmem_reqstream_msg[5U] 
                                                         >> 0xcU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__str
                  ,"%s",0,16,SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__str, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__rdy 
        = vlSymsp->TOP.dmem_reqstream_rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__val 
        = vlSymsp->TOP.dmem_reqstream_val;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__rdy) 
         & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__352__str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__str);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__352__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__352__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__352__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__352__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__352__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__352__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__352__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__352__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__352__trace);
    } else if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__rdy) 
                & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__val)))) {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__353__num 
            = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__353__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__353__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__353__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__353__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__353__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__353__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__353__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__353__trace);
    } else if (((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__rdy)) 
                & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__354__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__354__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__354__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__354__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__354__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__354__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__354__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__354__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__354__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__354__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__355__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__355__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__355__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__355__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__355__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__355__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__355__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__355__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__355__trace);
    } else if ((1U & ((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__rdy)) 
                      & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__val))))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__356__str, VSingleCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__356__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__356__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__356__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__356__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__356__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__356__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__356__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__356__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__356__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__357__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__357__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__357__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__357__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__357__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__357__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__357__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__357__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__357__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__358__str, VSingleCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__358__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__358__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__358__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__358__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__358__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__358__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__358__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__358__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__358__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__359__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__359__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__359__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__359__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__359__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__359__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__359__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__359__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__359__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__351__trace);
}

void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__type_str;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace);
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__val;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__val = 0;
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__361__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__361__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__361__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__361__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__362__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__362__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__362__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__362__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__362__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__362__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__363__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__363__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__363__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__363__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__364__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__364__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__364__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__364__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__364__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__364__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__365__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__365__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__365__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__365__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__366__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__366__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__366__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__366__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__366__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__366__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__367__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__367__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__367__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__367__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__368__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__368__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__368__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__368__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__368__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__368__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.dmem_respstream_msg[4U] 
                           >> 0xeU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.dmem_respstream_msg[4U] 
                                                        >> 0xeU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.dmem_respstream_msg[4U] 
                                                         >> 0xeU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__str
                  ,"%s",0,16,SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__str, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__rdy 
        = vlSymsp->TOP.dmem_respstream_rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__val 
        = vlSymsp->TOP.dmem_respstream_val;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__rdy) 
         & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__361__str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__str);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__361__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__361__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__361__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__361__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__361__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__361__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__361__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__361__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__361__trace);
    } else if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__rdy) 
                & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__val)))) {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__362__num 
            = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__362__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__362__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__362__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__362__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__362__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__362__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__362__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__362__trace);
    } else if (((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__rdy)) 
                & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__363__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__363__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__363__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__363__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__363__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__363__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__363__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__363__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__363__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__363__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__364__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__364__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__364__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__364__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__364__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__364__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__364__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__364__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__364__trace);
    } else if ((1U & ((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__rdy)) 
                      & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__val))))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__365__str, VSingleCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__365__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__365__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__365__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__365__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__365__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__365__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__365__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__365__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__365__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__366__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__366__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__366__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__366__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__366__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__366__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__366__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__366__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__366__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__367__str, VSingleCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__367__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__367__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__367__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__367__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__367__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__367__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__367__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__367__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__367__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__368__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__368__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__368__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__368__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__368__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__368__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__368__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__368__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__368__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__360__trace);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCoreSys_noparam___024root___dump_triggers__ico(VSingleCoreSys_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VSingleCoreSys_noparam___024root___eval_triggers__ico(VSingleCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSingleCoreSys_noparam___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCoreSys_noparam___024root___dump_triggers__act(VSingleCoreSys_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VSingleCoreSys_noparam___024root___eval_triggers__act(VSingleCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSingleCoreSys_noparam___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VSingleCoreSys_noparam___024root___nba_sequent__TOP__1(VSingleCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state = 0U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state = 0U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state = 0U;
    } else {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__next_state;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state;
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                               << 2U) | (((1U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)))))))) {
        if ((((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
              << 2U) | (((1U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                         << 1U) | (0U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF_NX("[%0t] %%Error: IntMulAlt.v:250: Assertion failed in %NSingleCoreSys_noparam.v.proc.dpath.imul.ctrl: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state));
                VL_STOP_MT("lab1_imul/IntMulAlt.v", 250, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF_NX("[%0t] %%Error: IntMulAlt.v:250: Assertion failed in %NSingleCoreSys_noparam.v.proc.dpath.imul.ctrl: unique case, but none matched for '2'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),2,(IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state));
            VL_STOP_MT("lab1_imul/IntMulAlt.v", 250, "");
        }
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_req_rdy_D = 0U;
    if ((0U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_req_rdy_D = 1U;
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_resp_val_X = 0U;
    if ((0U != (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        if ((1U != (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
            if ((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_resp_val_X = 1U;
            }
        }
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__read_data_reg_en 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))
                                             : ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                >> 1U)))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__evict_addr_reg_en 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U))) 
                                       && (1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__memresp_en 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))))));
    vlSelf->imem_reqstream_val = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 4U))) 
                                  && ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                       ? ((1U & (~ 
                                                 ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                   >> 1U))) 
                                              && (1U 
                                                  & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))
                                       : ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                   >> 1U))) 
                                              && (1U 
                                                  & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->imem_respstream_rdy = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 4U))) 
                                   && ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                        ? ((1U & (~ 
                                                  ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                   >> 2U))) 
                                           && ((1U 
                                                & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                   >> 1U)) 
                                               && (1U 
                                                   & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))))
                                        : ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                  >> 2U)) 
                                           && (1U & 
                                               ((2U 
                                                 & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                                 : (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cachereq_en 
        = ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__data_array_ren 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))))
                                   : ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                       ? ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))
                                       : ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__wben_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__write_data_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__memreq_type 
        = ((0x10U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
            ? 0U : ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                     ? ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                         ? 0U : ((2U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                  ? 0U : ((1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                           ? 1U : 0U)))
                     : 0U));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__mem_req_addr_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && (1U & ((2U 
                                                 & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                                 : (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__data_array_wen 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && (1U & ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((2U 
                                                 & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                                 ? (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)
                                                 : 
                                                (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))
                                             : ((1U 
                                                 & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_reqstream_rdy 
        = ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__tag_array_ren 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))
                                             : (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_respstream_val 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                              >> 1U)) 
                                       && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__read_data_reg_en 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))
                                             : ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                >> 1U)))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__evict_addr_reg_en 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U))) 
                                       && (1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__memresp_en 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))))));
    vlSelf->dmem_reqstream_val = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 4U))) 
                                  && ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                       ? ((1U & (~ 
                                                 ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                   >> 1U))) 
                                              && (1U 
                                                  & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))
                                       : ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                   >> 1U))) 
                                              && (1U 
                                                  & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->dmem_respstream_rdy = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 4U))) 
                                   && ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                        ? ((1U & (~ 
                                                  ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                   >> 2U))) 
                                           && ((1U 
                                                & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                   >> 1U)) 
                                               && (1U 
                                                   & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))))
                                        : ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                  >> 2U)) 
                                           && (1U & 
                                               ((2U 
                                                 & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                                 : (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachereq_en 
        = ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__data_array_ren 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))))
                                   : ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                       ? ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))
                                       : ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__wben_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__write_data_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__memreq_type 
        = ((0x10U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
            ? 0U : ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                     ? ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                         ? 0U : ((2U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                  ? 0U : ((1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                           ? 1U : 0U)))
                     : 0U));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__mem_req_addr_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && (1U & ((2U 
                                                 & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                                 : (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__data_array_wen 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && (1U & ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((2U 
                                                 & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)
                                                 : 
                                                (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))
                                             : ((1U 
                                                 & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_reqstream_rdy 
        = ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__tag_array_ren 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))
                                             : (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_respstream_val 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                              >> 1U)) 
                                       && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))));
}
