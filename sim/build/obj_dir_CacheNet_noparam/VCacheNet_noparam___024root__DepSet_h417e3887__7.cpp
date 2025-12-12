// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCacheNet_noparam.h for the primary calling header

#include "VCacheNet_noparam__pch.h"
#include "VCacheNet_noparam__Syms.h"
#include "VCacheNet_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0;
extern const VlWide<128>/*4095:0*/ VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VCacheNet_noparam__ConstPool__CONST_haead36df_0;

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace);
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__val;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__val = 0;
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__rdy;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1043__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1043__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1043__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1043__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1044__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1044__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1044__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1044__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1044__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1044__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1045__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1045__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1045__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1045__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1046__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1046__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1046__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1046__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1046__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1046__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1047__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1047__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1047__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1047__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1048__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1048__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1048__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1048__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1048__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1048__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1049__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1049__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1049__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1049__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1050__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1050__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1050__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1050__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1050__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1050__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_msg
                                              [0U] 
                                              >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_msg
                                   [0U] >> 0x38U))));
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__rdy 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_rdy
        [0U];
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__val 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_val
        [0U];
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__rdy) 
         & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1043__str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1043__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1043__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1043__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1043__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1043__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1043__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1043__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1043__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1043__trace);
    } else if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__rdy) 
                & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__val)))) {
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1044__num 
            = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1044__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1044__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1044__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1044__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1044__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1044__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1044__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1044__trace);
    } else if (((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__rdy)) 
                & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1045__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1045__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1045__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1045__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1045__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1045__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1045__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1045__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1045__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1045__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1046__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1046__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1046__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1046__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1046__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1046__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1046__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1046__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1046__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__rdy)) 
                      & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1047__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1047__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1047__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1047__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1047__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1047__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1047__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1047__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1047__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1047__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1048__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1048__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1048__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1048__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1048__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1048__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1048__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1048__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1048__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1049__str, VCacheNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1049__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1049__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1049__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1049__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1049__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1049__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1049__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1049__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1049__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1050__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1050__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1050__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1050__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1050__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1050__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1050__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1050__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1050__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1042__trace);
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace);
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__val;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__val = 0;
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__rdy;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1052__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1052__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1052__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1052__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1053__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1053__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1053__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1053__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1053__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1053__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1054__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1054__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1054__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1054__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1055__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1055__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1055__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1055__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1055__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1055__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1056__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1056__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1056__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1056__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1057__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1057__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1057__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1057__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1057__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1057__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1058__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1058__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1058__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1058__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1059__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1059__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1059__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1059__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1059__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1059__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_msg
                                              [1U] 
                                              >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_msg
                                   [1U] >> 0x38U))));
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__str);
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__rdy 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_rdy
        [1U];
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__val 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_val
        [1U];
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__rdy) 
         & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1052__str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1052__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1052__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1052__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1052__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1052__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1052__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1052__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1052__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1052__trace);
    } else if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__rdy) 
                & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__val)))) {
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1053__num 
            = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1053__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1053__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1053__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1053__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1053__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1053__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1053__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1053__trace);
    } else if (((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__rdy)) 
                & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1054__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1054__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1054__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1054__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1054__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1054__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1054__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1054__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1054__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1054__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1055__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1055__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1055__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1055__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1055__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1055__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1055__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1055__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1055__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__rdy)) 
                      & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1056__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1056__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1056__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1056__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1056__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1056__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1056__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1056__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1056__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1056__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1057__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1057__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1057__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1057__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1057__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1057__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1057__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1057__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1057__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1058__str, VCacheNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1058__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1058__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1058__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1058__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1058__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1058__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1058__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1058__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1058__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1059__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1059__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1059__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1059__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1059__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1059__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1059__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1059__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1059__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1051__trace);
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace);
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__val;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__val = 0;
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__rdy;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1061__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1061__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1061__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1061__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1062__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1062__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1062__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1062__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1062__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1062__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1063__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1063__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1063__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1063__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1064__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1064__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1064__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1064__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1064__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1064__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1065__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1065__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1065__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1065__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1066__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1066__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1066__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1066__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1066__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1066__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1067__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1067__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1067__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1067__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1068__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1068__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1068__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1068__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1068__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1068__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_msg
                                              [1U] 
                                              >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_msg
                                   [1U] >> 0x38U))));
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__str);
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__rdy 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_rdy
        [1U];
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__val 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_val
        [1U];
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__rdy) 
         & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1061__str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1061__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1061__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1061__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1061__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1061__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1061__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1061__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1061__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1061__trace);
    } else if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__rdy) 
                & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__val)))) {
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1062__num 
            = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1062__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1062__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1062__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1062__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1062__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1062__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1062__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1062__trace);
    } else if (((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__rdy)) 
                & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1063__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1063__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1063__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1063__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1063__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1063__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1063__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1063__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1063__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1063__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1064__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1064__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1064__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1064__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1064__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1064__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1064__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1064__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1064__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__rdy)) 
                      & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1065__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1065__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1065__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1065__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1065__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1065__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1065__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1065__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1065__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1065__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1066__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1066__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1066__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1066__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1066__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1066__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1066__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1066__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1066__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1067__str, VCacheNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1067__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1067__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1067__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1067__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1067__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1067__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1067__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1067__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1067__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1068__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1068__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1068__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1068__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1068__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1068__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1068__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1068__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1068__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1060__trace);
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace);
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__val;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__val = 0;
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__rdy;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1070__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1070__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1070__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1070__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1071__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1071__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1071__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1071__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1071__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1071__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1072__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1072__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1072__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1072__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1073__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1073__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1073__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1073__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1073__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1073__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1074__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1074__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1074__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1074__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1075__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1075__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1075__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1075__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1075__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1075__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1076__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1076__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1076__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1076__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1077__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1077__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1077__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1077__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1077__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1077__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_msg
                                              [2U] 
                                              >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_msg
                                   [2U] >> 0x38U))));
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__str);
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__rdy 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_rdy
        [2U];
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__val 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_val
        [2U];
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__rdy) 
         & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1070__str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1070__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1070__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1070__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1070__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1070__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1070__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1070__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1070__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1070__trace);
    } else if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__rdy) 
                & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__val)))) {
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1071__num 
            = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1071__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1071__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1071__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1071__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1071__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1071__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1071__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1071__trace);
    } else if (((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__rdy)) 
                & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1072__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1072__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1072__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1072__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1072__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1072__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1072__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1072__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1072__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1072__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1073__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1073__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1073__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1073__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1073__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1073__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1073__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1073__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1073__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__rdy)) 
                      & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1074__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1074__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1074__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1074__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1074__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1074__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1074__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1074__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1074__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1074__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1075__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1075__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1075__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1075__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1075__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1075__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1075__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1075__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1075__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1076__str, VCacheNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1076__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1076__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1076__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1076__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1076__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1076__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1076__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1076__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1076__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1077__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1077__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1077__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1077__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1077__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1077__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1077__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1077__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1077__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1069__trace);
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace);
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__val;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__val = 0;
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__rdy;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1079__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1079__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1079__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1079__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1080__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1080__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1080__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1080__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1080__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1080__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1081__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1081__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1081__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1081__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1082__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1082__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1082__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1082__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1082__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1082__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1083__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1083__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1083__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1083__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1084__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1084__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1084__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1084__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1084__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1084__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1085__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1085__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1085__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1085__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1086__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1086__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1086__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1086__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1086__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1086__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_msg
                                              [2U] 
                                              >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_msg
                                   [2U] >> 0x38U))));
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__str);
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__rdy 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_rdy
        [2U];
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__val 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_val
        [2U];
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__rdy) 
         & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1079__str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1079__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1079__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1079__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1079__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1079__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1079__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1079__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1079__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1079__trace);
    } else if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__rdy) 
                & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__val)))) {
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1080__num 
            = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1080__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1080__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1080__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1080__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1080__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1080__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1080__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1080__trace);
    } else if (((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__rdy)) 
                & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1081__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1081__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1081__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1081__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1081__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1081__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1081__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1081__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1081__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1081__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1082__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1082__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1082__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1082__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1082__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1082__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1082__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1082__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1082__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__rdy)) 
                      & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1083__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1083__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1083__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1083__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1083__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1083__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1083__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1083__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1083__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1083__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1084__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1084__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1084__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1084__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1084__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1084__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1084__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1084__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1084__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1085__str, VCacheNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1085__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1085__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1085__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1085__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1085__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1085__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1085__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1085__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1085__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1086__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1086__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1086__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1086__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1086__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1086__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1086__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1086__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1086__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1078__trace);
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace);
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__val;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__val = 0;
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__rdy;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1088__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1088__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1088__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1088__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1089__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1089__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1089__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1089__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1089__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1089__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1090__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1090__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1090__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1090__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1091__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1091__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1091__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1091__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1091__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1091__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1092__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1092__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1092__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1092__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1093__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1093__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1093__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1093__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1093__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1093__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1094__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1094__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1094__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1094__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1095__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1095__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1095__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1095__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1095__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1095__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_msg
                                              [3U] 
                                              >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_msg
                                   [3U] >> 0x38U))));
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__str);
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__rdy 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_rdy
        [3U];
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__val 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_val
        [3U];
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__rdy) 
         & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1088__str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1088__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1088__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1088__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1088__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1088__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1088__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1088__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1088__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1088__trace);
    } else if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__rdy) 
                & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__val)))) {
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1089__num 
            = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1089__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1089__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1089__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1089__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1089__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1089__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1089__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1089__trace);
    } else if (((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__rdy)) 
                & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1090__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1090__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1090__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1090__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1090__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1090__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1090__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1090__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1090__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1090__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1091__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1091__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1091__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1091__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1091__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1091__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1091__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1091__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1091__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__rdy)) 
                      & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1092__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1092__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1092__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1092__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1092__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1092__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1092__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1092__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1092__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1092__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1093__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1093__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1093__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1093__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1093__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1093__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1093__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1093__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1093__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1094__str, VCacheNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1094__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1094__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1094__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1094__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1094__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1094__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1094__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1094__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1094__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1095__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1095__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1095__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1095__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1095__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1095__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1095__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1095__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1095__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1087__trace);
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace);
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__val;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__val = 0;
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__rdy;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1097__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1097__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1097__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1097__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1098__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1098__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1098__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1098__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1098__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1098__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1099__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1099__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1099__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1099__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1100__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1100__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1100__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1100__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1100__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1100__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1101__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1101__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1101__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1101__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1102__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1102__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1102__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1102__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1102__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1102__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1103__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1103__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1103__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1103__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1104__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1104__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1104__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1104__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1104__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1104__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_msg
                                              [3U] 
                                              >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_msg
                                   [3U] >> 0x38U))));
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__str);
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__rdy 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_rdy
        [3U];
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__val 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_val
        [3U];
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__rdy) 
         & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1097__str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1097__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1097__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1097__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1097__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1097__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1097__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1097__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1097__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1097__trace);
    } else if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__rdy) 
                & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__val)))) {
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1098__num 
            = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1098__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1098__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1098__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1098__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1098__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1098__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1098__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1098__trace);
    } else if (((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__rdy)) 
                & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1099__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1099__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1099__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1099__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1099__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1099__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1099__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1099__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1099__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1099__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1100__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1100__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1100__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1100__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1100__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1100__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1100__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1100__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1100__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__rdy)) 
                      & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1101__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1101__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1101__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1101__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1101__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1101__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1101__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1101__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1101__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1101__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1102__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1102__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1102__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1102__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1102__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1102__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1102__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1102__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1102__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1103__str, VCacheNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1103__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1103__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1103__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1103__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1103__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1103__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1103__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1103__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1103__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1104__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1104__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1104__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1104__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1104__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1104__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1104__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1104__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1104__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1096__trace);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCacheNet_noparam___024root___dump_triggers__ico(VCacheNet_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VCacheNet_noparam___024root___eval_triggers__ico(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCacheNet_noparam___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCacheNet_noparam___024root___dump_triggers__act(VCacheNet_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VCacheNet_noparam___024root___eval_triggers__act(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCacheNet_noparam___024root___dump_triggers__act(vlSelf);
    }
#endif
}
