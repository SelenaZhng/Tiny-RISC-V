// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiCoreDataCache_noparam.h for the primary calling header

#include "VMultiCoreDataCache_noparam__pch.h"
#include "VMultiCoreDataCache_noparam__Syms.h"
#include "VMultiCoreDataCache_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0;

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2576__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2576__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2576__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2576__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2577__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2577__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2577__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2577__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2577__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2577__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2578__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2578__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2578__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2578__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2579__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2579__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2579__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2579__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2579__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2579__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2580__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2580__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2580__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2580__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2581__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2581__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2581__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2581__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2581__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2581__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2582__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2582__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2582__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2582__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2583__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2583__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2583__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2583__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2583__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2583__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellinp__MEMREQ2NETMSG__BRA__1__KET____DOT__memreq2netmsg__istream_msg[5U] 
                           >> 0xcU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellinp__MEMREQ2NETMSG__BRA__1__KET____DOT__memreq2netmsg__istream_msg[5U] 
                                                        >> 0xcU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellinp__MEMREQ2NETMSG__BRA__1__KET____DOT__memreq2netmsg__istream_msg[5U] 
                                                         >> 0xcU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__str
                  ,"%s",0,16,MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
        [1U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_reqstream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2576__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2576__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2576__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2576__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2576__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2576__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2576__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2576__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2576__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2576__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2577__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2577__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2577__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2577__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2577__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2577__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2577__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2577__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2577__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2578__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2578__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2578__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2578__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2578__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2578__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2578__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2578__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2578__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2578__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2579__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2579__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2579__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2579__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2579__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2579__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2579__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2579__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2579__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2580__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2580__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2580__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2580__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2580__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2580__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2580__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2580__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2580__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2580__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2581__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2581__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2581__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2581__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2581__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2581__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2581__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2581__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2581__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2582__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2582__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2582__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2582__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2582__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2582__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2582__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2582__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2582__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2582__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2583__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2583__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2583__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2583__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2583__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2583__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2583__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2583__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2583__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2575__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__type_str;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2585__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2585__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2585__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2585__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2586__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2586__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2586__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2586__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2586__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2586__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2587__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2587__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2587__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2587__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2588__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2588__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2588__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2588__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2588__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2588__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2589__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2589__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2589__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2589__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2590__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2590__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2590__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2590__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2590__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2590__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2591__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2591__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2591__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2591__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2592__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2592__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2592__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2592__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2592__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2592__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[4U] 
                           >> 0xeU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[4U] 
                                                        >> 0xeU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[4U] 
                                                         >> 0xeU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__str
                  ,"%s",0,16,MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_respstream_rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
        [1U];
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2585__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2585__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2585__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2585__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2585__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2585__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2585__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2585__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2585__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2585__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2586__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2586__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2586__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2586__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2586__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2586__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2586__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2586__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2586__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2587__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2587__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2587__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2587__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2587__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2587__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2587__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2587__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2587__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2587__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2588__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2588__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2588__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2588__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2588__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2588__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2588__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2588__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2588__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2589__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2589__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2589__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2589__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2589__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2589__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2589__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2589__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2589__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2589__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2590__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2590__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2590__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2590__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2590__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2590__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2590__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2590__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2590__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2591__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2591__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2591__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2591__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2591__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2591__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2591__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2591__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2591__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2591__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2592__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2592__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2592__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2592__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2592__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2592__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2592__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2592__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2592__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2584__trace);
}

extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h7ed547c1_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h296ef16f_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h56610484_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h0566f112_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h777355b7_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_hed8640c4_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_hb98e3b6b_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_ha1593b7e_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_he2533c7c_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h97a3ee4e_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_hd61c3baa_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_hf42f8d5f_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h17de8ffe_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_hdbedbe02_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h89919522_0;

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2593__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2593__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2593__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2593__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2594__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2594__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2594__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2594__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2595__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2595__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2595__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2595__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2596__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2596__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2596__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2596__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2597__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2597__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2597__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2597__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2598__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2598__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2598__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2598__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2599__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2599__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2599__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2599__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2600__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2600__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2600__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2600__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2601__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2601__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2601__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2601__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2602__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2602__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2602__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2602__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2603__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2603__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2603__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2603__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2604__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2604__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2604__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2604__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2605__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2605__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2605__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2605__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2606__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2606__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2606__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2606__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2607__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2607__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2607__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2607__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2608__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2608__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2608__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2608__str);
    // Body
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2593__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h7ed547c1_0);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2593__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2593__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2593__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
    }
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
        = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2593__trace[0U];
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2593__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2593__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2593__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2593__trace[0U] 
        = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2593__trace);
    if ((0x10U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2594__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h296ef16f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2594__trace, trace_str);
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2594__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2594__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
        }
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2594__trace[0U];
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2594__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2594__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2594__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2594__trace[0U] 
            = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2594__trace);
    } else if ((8U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2595__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h296ef16f_0);
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2595__trace, trace_str);
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2595__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2595__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2595__trace[0U];
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2595__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2595__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2595__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2595__trace[0U] 
                = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2595__trace);
        } else if ((2U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
                VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2596__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h56610484_0);
                VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2596__trace, trace_str);
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2596__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2596__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
                }
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2596__trace[0U];
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2596__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2596__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2596__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2596__trace[0U] 
                    = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2596__trace);
            } else {
                VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2597__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0566f112_0);
                VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2597__trace, trace_str);
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2597__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2597__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
                }
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2597__trace[0U];
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2597__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2597__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2597__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2597__trace[0U] 
                    = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2597__trace);
            }
        } else if ((1U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2598__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h777355b7_0);
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2598__trace, trace_str);
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2598__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2598__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2598__trace[0U];
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2598__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2598__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2598__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2598__trace[0U] 
                = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2598__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2599__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hed8640c4_0);
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2599__trace, trace_str);
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2599__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2599__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2599__trace[0U];
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2599__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2599__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2599__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2599__trace[0U] 
                = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2599__trace);
        }
    } else if ((4U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((2U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
                VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2600__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hb98e3b6b_0);
                VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2600__trace, trace_str);
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2600__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2600__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
                }
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2600__trace[0U];
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2600__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2600__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2600__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2600__trace[0U] 
                    = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2600__trace);
            } else {
                VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2601__str, VMultiCoreDataCache_noparam__ConstPool__CONST_ha1593b7e_0);
                VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2601__trace, trace_str);
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2601__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2601__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
                }
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2601__trace[0U];
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2601__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2601__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2601__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2601__trace[0U] 
                    = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2601__trace);
            }
        } else if ((1U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2602__str, VMultiCoreDataCache_noparam__ConstPool__CONST_he2533c7c_0);
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2602__trace, trace_str);
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2602__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2602__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2602__trace[0U];
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2602__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2602__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2602__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2602__trace[0U] 
                = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2602__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2603__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h97a3ee4e_0);
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2603__trace, trace_str);
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2603__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2603__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2603__trace[0U];
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2603__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2603__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2603__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2603__trace[0U] 
                = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2603__trace);
        }
    } else if ((2U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((1U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2604__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hd61c3baa_0);
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2604__trace, trace_str);
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2604__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2604__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2604__trace[0U];
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2604__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2604__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2604__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2604__trace[0U] 
                = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2604__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2605__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf42f8d5f_0);
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2605__trace, trace_str);
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2605__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2605__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2605__trace[0U];
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2605__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2605__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2605__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2605__trace[0U] 
                = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2605__trace);
        }
    } else if ((1U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2606__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h17de8ffe_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2606__trace, trace_str);
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2606__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2606__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
        }
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2606__trace[0U];
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2606__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2606__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2606__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2606__trace[0U] 
            = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2606__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2607__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hdbedbe02_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2607__trace, trace_str);
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2607__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2607__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
        }
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2607__trace[0U];
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2607__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2607__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2607__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2607__trace[0U] 
            = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2607__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2608__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h89919522_0);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2608__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2608__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2608__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
    }
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
        = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2608__trace[0U];
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2608__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2608__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2608__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2608__trace[0U] 
        = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2608__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__type_str;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2624__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2624__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2624__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2624__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2625__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2625__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2625__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2625__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2625__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2625__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2626__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2626__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2626__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2626__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2627__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2627__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2627__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2627__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2627__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2627__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2628__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2628__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2628__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2628__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2629__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2629__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2629__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2629__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2629__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2629__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2630__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2630__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2630__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2630__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2631__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2631__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2631__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2631__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2631__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2631__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
                           >> 0xaU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
                                                        >> 0xaU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
                                                         >> 0xaU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__str
                  ,"%s",0,16,MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__proc2cache_reqstream_rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_val
        [2U];
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2624__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2624__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2624__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2624__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2624__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2624__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2624__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2624__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2624__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2624__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2625__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2625__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2625__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2625__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2625__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2625__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2625__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2625__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2625__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2626__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2626__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2626__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2626__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2626__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2626__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2626__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2626__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2626__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2626__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2627__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2627__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2627__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2627__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2627__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2627__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2627__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2627__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2627__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2628__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2628__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2628__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2628__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2628__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2628__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2628__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2628__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2628__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2628__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2629__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2629__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2629__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2629__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2629__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2629__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2629__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2629__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2629__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2630__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2630__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2630__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2630__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2630__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2630__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2630__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2630__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2630__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2630__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2631__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2631__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2631__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2631__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2631__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2631__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2631__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2631__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2631__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2623__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__type_str;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__type_str = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2633__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2633__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2633__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2633__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2634__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2634__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2634__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2634__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2634__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2634__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2635__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2635__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2635__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2635__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2636__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2636__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2636__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2636__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2636__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2636__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2637__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2637__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2637__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2637__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2638__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2638__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2638__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2638__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2638__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2638__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2639__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2639__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2639__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2639__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2640__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2640__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2640__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2640__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2640__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2640__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__type_str 
        = ((0U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cacheresp_type))
            ? 0x7264U : ((1U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cacheresp_type))
                          ? 0x7772U : ((2U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cacheresp_type))
                                        ? 0x776eU : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__str
                  ,"%s",0,16,MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__proc2cache_respstream_val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__proc2cache_respstream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2633__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2633__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2633__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2633__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2633__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2633__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2633__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2633__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2633__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2633__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2634__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2634__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2634__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2634__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2634__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2634__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2634__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2634__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2634__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2635__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2635__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2635__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2635__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2635__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2635__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2635__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2635__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2635__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2635__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2636__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2636__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2636__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2636__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2636__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2636__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2636__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2636__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2636__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2637__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2637__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2637__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2637__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2637__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2637__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2637__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2637__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2637__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2637__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2638__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2638__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2638__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2638__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2638__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2638__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2638__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2638__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2638__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2639__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2639__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2639__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2639__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2639__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2639__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2639__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2639__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2639__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2639__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2640__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2640__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2640__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2640__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2640__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2640__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2640__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2640__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2640__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2632__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2642__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2642__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2642__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2642__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2643__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2643__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2643__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2643__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2643__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2643__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2644__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2644__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2644__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2644__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2645__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2645__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2645__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2645__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2645__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2645__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2646__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2646__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2646__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2646__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2647__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2647__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2647__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2647__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2647__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2647__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2648__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2648__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2648__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2648__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2649__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2649__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2649__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2649__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2649__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2649__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellinp__MEMREQ2NETMSG__BRA__2__KET____DOT__memreq2netmsg__istream_msg[5U] 
                           >> 0xcU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellinp__MEMREQ2NETMSG__BRA__2__KET____DOT__memreq2netmsg__istream_msg[5U] 
                                                        >> 0xcU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellinp__MEMREQ2NETMSG__BRA__2__KET____DOT__memreq2netmsg__istream_msg[5U] 
                                                         >> 0xcU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__str
                  ,"%s",0,16,MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
        [2U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_reqstream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2642__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2642__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2642__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2642__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2642__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2642__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2642__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2642__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2642__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2642__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2643__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2643__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2643__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2643__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2643__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2643__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2643__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2643__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2643__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2644__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2644__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2644__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2644__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2644__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2644__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2644__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2644__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2644__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2644__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2645__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2645__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2645__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2645__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2645__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2645__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2645__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2645__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2645__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2646__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2646__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2646__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2646__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2646__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2646__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2646__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2646__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2646__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2646__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2647__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2647__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2647__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2647__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2647__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2647__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2647__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2647__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2647__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2648__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2648__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2648__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2648__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2648__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2648__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2648__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2648__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2648__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2648__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2649__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2649__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2649__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2649__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2649__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2649__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2649__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2649__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2649__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2641__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__type_str;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2651__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2651__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2651__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2651__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2652__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2652__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2652__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2652__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2652__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2652__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2653__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2653__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2653__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2653__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2654__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2654__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2654__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2654__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2654__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2654__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2655__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2655__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2655__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2655__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2656__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2656__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2656__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2656__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2656__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2656__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2657__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2657__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2657__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2657__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2658__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2658__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2658__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2658__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2658__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2658__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[4U] 
                           >> 0xeU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[4U] 
                                                        >> 0xeU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[4U] 
                                                         >> 0xeU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__str
                  ,"%s",0,16,MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_respstream_rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
        [2U];
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2651__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2651__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2651__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2651__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2651__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2651__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2651__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2651__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2651__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2651__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2652__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2652__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2652__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2652__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2652__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2652__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2652__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2652__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2652__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2653__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2653__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2653__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2653__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2653__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2653__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2653__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2653__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2653__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2653__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2654__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2654__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2654__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2654__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2654__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2654__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2654__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2654__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2654__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2655__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2655__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2655__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2655__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2655__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2655__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2655__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2655__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2655__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2655__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2656__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2656__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2656__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2656__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2656__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2656__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2656__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2656__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2656__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2657__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2657__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2657__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2657__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2657__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2657__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2657__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2657__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2657__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2657__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2658__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2658__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2658__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2658__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2658__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2658__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2658__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2658__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2658__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2650__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2659__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2659__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2659__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2659__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2660__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2660__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2660__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2660__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2661__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2661__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2661__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2661__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2662__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2662__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2662__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2662__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2663__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2663__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2663__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2663__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2664__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2664__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2664__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2664__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2665__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2665__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2665__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2665__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2666__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2666__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2666__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2666__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2667__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2667__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2667__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2667__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2668__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2668__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2668__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2668__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2669__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2669__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2669__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2669__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2670__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2670__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2670__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2670__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2671__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2671__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2671__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2671__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2672__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2672__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2672__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2672__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2673__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2673__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2673__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2673__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2674__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2674__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2674__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2674__str);
    // Body
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2659__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h7ed547c1_0);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2659__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2659__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2659__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
    }
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
        = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2659__trace[0U];
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2659__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2659__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2659__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2659__trace[0U] 
        = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2659__trace);
    if ((0x10U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2660__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h296ef16f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2660__trace, trace_str);
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2660__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2660__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
        }
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2660__trace[0U];
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2660__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2660__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2660__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2660__trace[0U] 
            = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2660__trace);
    } else if ((8U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2661__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h296ef16f_0);
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2661__trace, trace_str);
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2661__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2661__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2661__trace[0U];
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2661__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2661__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2661__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2661__trace[0U] 
                = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2661__trace);
        } else if ((2U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
                VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2662__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h56610484_0);
                VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2662__trace, trace_str);
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2662__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2662__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
                }
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2662__trace[0U];
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2662__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2662__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2662__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2662__trace[0U] 
                    = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2662__trace);
            } else {
                VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2663__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0566f112_0);
                VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2663__trace, trace_str);
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2663__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2663__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
                }
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2663__trace[0U];
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2663__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2663__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2663__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2663__trace[0U] 
                    = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2663__trace);
            }
        } else if ((1U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2664__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h777355b7_0);
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2664__trace, trace_str);
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2664__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2664__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2664__trace[0U];
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2664__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2664__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2664__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2664__trace[0U] 
                = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2664__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2665__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hed8640c4_0);
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2665__trace, trace_str);
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2665__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2665__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2665__trace[0U];
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2665__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2665__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2665__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2665__trace[0U] 
                = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2665__trace);
        }
    } else if ((4U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((2U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
                VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2666__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hb98e3b6b_0);
                VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2666__trace, trace_str);
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2666__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2666__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
                }
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2666__trace[0U];
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2666__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2666__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2666__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2666__trace[0U] 
                    = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2666__trace);
            } else {
                VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2667__str, VMultiCoreDataCache_noparam__ConstPool__CONST_ha1593b7e_0);
                VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2667__trace, trace_str);
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2667__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2667__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
                }
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2667__trace[0U];
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2667__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2667__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2667__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2667__trace[0U] 
                    = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2667__trace);
            }
        } else if ((1U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2668__str, VMultiCoreDataCache_noparam__ConstPool__CONST_he2533c7c_0);
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2668__trace, trace_str);
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2668__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2668__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2668__trace[0U];
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2668__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2668__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2668__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2668__trace[0U] 
                = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2668__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2669__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h97a3ee4e_0);
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2669__trace, trace_str);
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2669__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2669__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2669__trace[0U];
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2669__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2669__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2669__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2669__trace[0U] 
                = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2669__trace);
        }
    } else if ((2U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((1U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2670__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hd61c3baa_0);
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2670__trace, trace_str);
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2670__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2670__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2670__trace[0U];
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2670__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2670__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2670__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2670__trace[0U] 
                = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2670__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2671__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf42f8d5f_0);
            VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2671__trace, trace_str);
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2671__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2671__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2671__trace[0U];
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2671__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2671__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2671__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2671__trace[0U] 
                = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2671__trace);
        }
    } else if ((1U & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2672__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h17de8ffe_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2672__trace, trace_str);
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2672__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2672__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
        }
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2672__trace[0U];
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2672__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2672__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2672__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2672__trace[0U] 
            = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2672__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2673__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hdbedbe02_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2673__trace, trace_str);
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2673__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2673__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
        }
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2673__trace[0U];
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2673__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2673__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2673__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2673__trace[0U] 
            = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2673__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2674__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h89919522_0);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2674__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2674__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2674__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0);
    }
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
        = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2674__trace[0U];
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
        = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2674__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2674__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2674__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1))))));
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2674__trace[0U] 
        = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__vc_trace__DOT__append_str__2674__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__type_str;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2690__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2690__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2690__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2690__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2691__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2691__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2691__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2691__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2691__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2691__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2692__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2692__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2692__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2692__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2693__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2693__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2693__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2693__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2693__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2693__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2694__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2694__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2694__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2694__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2695__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2695__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2695__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2695__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2695__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2695__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2696__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2696__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2696__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2696__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2697__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2697__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2697__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2697__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2697__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2697__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
                           >> 0xaU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
                                                        >> 0xaU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
                                                         >> 0xaU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__str
                  ,"%s",0,16,MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__proc2cache_reqstream_rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_val
        [3U];
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2690__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2690__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2690__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2690__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2690__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2690__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2690__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2690__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2690__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2690__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2691__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2691__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2691__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2691__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2691__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2691__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2691__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2691__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2691__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2692__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2692__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2692__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2692__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2692__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2692__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2692__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2692__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2692__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2692__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2693__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2693__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2693__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2693__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2693__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2693__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2693__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2693__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2693__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2694__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2694__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2694__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2694__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2694__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2694__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2694__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2694__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2694__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2694__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2695__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2695__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2695__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2695__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2695__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2695__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2695__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2695__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2695__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2696__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2696__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2696__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2696__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2696__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2696__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2696__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2696__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2696__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2696__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2697__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2697__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2697__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2697__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2697__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2697__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2697__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2697__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2697__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2689__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__type_str;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__type_str = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2699__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2699__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2699__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2699__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2700__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2700__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2700__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2700__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2700__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2700__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2701__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2701__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2701__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2701__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2702__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2702__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2702__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2702__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2702__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2702__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2703__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2703__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2703__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2703__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2704__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2704__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2704__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2704__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2704__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2704__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2705__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2705__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2705__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2705__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2706__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2706__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2706__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2706__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2706__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2706__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__type_str 
        = ((0U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cacheresp_type))
            ? 0x7264U : ((1U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cacheresp_type))
                          ? 0x7772U : ((2U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cacheresp_type))
                                        ? 0x776eU : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__str
                  ,"%s",0,16,MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__proc2cache_respstream_val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__proc2cache_respstream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2699__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2699__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2699__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2699__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2699__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2699__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2699__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2699__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2699__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2699__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2700__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2700__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2700__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2700__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2700__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2700__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2700__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2700__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2700__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2701__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2701__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2701__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2701__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2701__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2701__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2701__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2701__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2701__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2701__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2702__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2702__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2702__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2702__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2702__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2702__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2702__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2702__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2702__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2703__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2703__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2703__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2703__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2703__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2703__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2703__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2703__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2703__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2703__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2704__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2704__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2704__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2704__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2704__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2704__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2704__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2704__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2704__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2705__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2705__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2705__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2705__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2705__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2705__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2705__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2705__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2705__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__2705__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2706__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2706__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2706__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2706__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2706__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2706__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2706__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2706__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__2706__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__2698__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2708__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2708__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2708__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2708__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2709__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2709__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2709__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2709__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2709__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2709__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2710__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2710__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2710__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2710__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2711__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2711__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2711__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2711__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2711__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2711__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2712__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2712__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2712__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2712__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2713__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2713__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2713__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2713__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2713__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2713__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2714__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2714__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2714__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2714__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2715__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2715__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2715__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2715__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2715__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2715__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellinp__MEMREQ2NETMSG__BRA__3__KET____DOT__memreq2netmsg__istream_msg[5U] 
                           >> 0xcU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellinp__MEMREQ2NETMSG__BRA__3__KET____DOT__memreq2netmsg__istream_msg[5U] 
                                                        >> 0xcU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellinp__MEMREQ2NETMSG__BRA__3__KET____DOT__memreq2netmsg__istream_msg[5U] 
                                                         >> 0xcU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__str
                  ,"%s",0,16,MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
        [3U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_reqstream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2708__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2708__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2708__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2708__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2708__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2708__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2708__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2708__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2708__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2708__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2709__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2709__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2709__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2709__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2709__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2709__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2709__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2709__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2709__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2710__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2710__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2710__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2710__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2710__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2710__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2710__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2710__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2710__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2710__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2711__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2711__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2711__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2711__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2711__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2711__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2711__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2711__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2711__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2712__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2712__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2712__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2712__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2712__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2712__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2712__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2712__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2712__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2712__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2713__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2713__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2713__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2713__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2713__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2713__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2713__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2713__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2713__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2714__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2714__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2714__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2714__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2714__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2714__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2714__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2714__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2714__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2714__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2715__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2715__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2715__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2715__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2715__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2715__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2715__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2715__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__2715__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2707__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__type_str;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2717__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2717__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2717__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2717__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2718__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2718__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2718__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2718__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2718__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2718__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2719__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2719__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2719__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2719__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2720__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2720__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2720__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2720__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2720__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2720__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2721__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2721__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2721__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2721__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2722__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2722__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2722__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2722__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2722__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2722__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2723__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2723__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2723__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2723__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2724__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2724__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2724__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2724__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2724__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2724__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[4U] 
                           >> 0xeU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[4U] 
                                                        >> 0xeU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[4U] 
                                                         >> 0xeU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__str
                  ,"%s",0,16,MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_respstream_rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
        [3U];
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2717__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2717__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2717__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2717__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2717__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2717__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2717__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2717__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2717__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2717__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2718__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2718__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2718__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2718__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2718__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2718__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2718__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2718__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2718__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2719__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2719__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2719__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2719__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2719__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2719__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2719__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2719__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2719__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2719__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2720__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2720__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2720__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2720__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2720__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2720__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2720__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2720__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2720__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2721__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2721__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2721__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2721__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2721__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2721__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2721__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2721__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2721__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2721__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2722__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2722__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2722__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2722__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2722__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2722__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2722__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2722__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2722__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2723__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2723__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2723__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2723__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2723__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2723__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2723__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2723__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2723__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__2723__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2724__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2724__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2724__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2724__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2724__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2724__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2724__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2724__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__2724__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__2716__trace);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiCoreDataCache_noparam___024root___dump_triggers__ico(VMultiCoreDataCache_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VMultiCoreDataCache_noparam___024root___eval_triggers__ico(VMultiCoreDataCache_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreDataCache_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMultiCoreDataCache_noparam___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiCoreDataCache_noparam___024root___dump_triggers__act(VMultiCoreDataCache_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VMultiCoreDataCache_noparam___024root___eval_triggers__act(VMultiCoreDataCache_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreDataCache_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root___eval_triggers__act\n"); );
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
        VMultiCoreDataCache_noparam___024root___dump_triggers__act(vlSelf);
    }
#endif
}
